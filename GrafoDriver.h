#include "antlr4-runtime.h"
#include "GrafoBaseVisitor.h"
#include "GrafoParser.h"
#include "GrafoLexer.h"
#include "trie2.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Verifier.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Value.h"
#include <map>
#include <string>
#include <stdexcept>
#include <iostream>

using namespace antlr4;
using namespace std;
using namespace llvm;

class GrafoDriver : public GrafoBaseVisitor {
private:
    // Mapa para almacenar los nodos y sus valores en LLVM
    map<std::string, Value*> nodeMap;
    map<string,string> nodePath;


    unique_ptr<LLVMContext> context;
    unique_ptr<Module> module;
    unique_ptr<IRBuilder<>> builder;
    
    Function* mainFunc;
    Function* insertFunction;
    Function* searchFunction;

    Trie trie;
    Value* root;  // Raíz del Trie

public:
    GrafoDriver() 
    : context(make_unique<LLVMContext>()),
      module(make_unique<Module>("GrafoModule", *context)),
      builder(make_unique<IRBuilder<>>(*context)),
      trie(context, module, builder) {
    
        root = nullptr;
        init();
    }

    void init(){
        auto FunctionType = llvm::FunctionType::get(Type::getInt32Ty(*context), false);
        this->mainFunc = llvm::Function::Create(
            FunctionType,
            Function::ExternalLinkage,
            "main",
            *module
        );

        auto entry = llvm::BasicBlock::Create(*context, "entry", mainFunc);
        builder->SetInsertPoint(entry);
        root = trie.createBinaryTrieNode();
    }

    void printIR() {
        module->print(llvm::outs(), nullptr);

        error_code errorCode;
        //Se imprime tambien en TrieModule.ll    
        llvm::raw_fd_ostream outLL("TrieModule.ll", errorCode);
            
    }

    void generateInsertFunction(string ruta) {
        // Nos aseguramos de que todo el código se inserte dentro de mainFunc
        BasicBlock* entry = BasicBlock::Create(*context, "entry", mainFunc);
        builder->SetInsertPoint(entry);

        // Obtenemos la ruta del argumento de mainFunc

        // Aseguramos que root está inicializado
        if (root == nullptr) {
            root = trie.createBinaryTrieNode();  // Inicializa la raíz si es necesario
        }

        // Llamamos a la función para insertar en el Trie
        trie.insertBinaryWord(root, ruta);

        // Finalmente, retornamos de mainFunc
        builder->CreateRetVoid();
    }

    void generateSearchFunction(string ruta1, string ruta2) {
        // Generamos una función de búsqueda que también se inserte en mainFunc
        BasicBlock* entry = BasicBlock::Create(*context, "entry", mainFunc);
        builder->SetInsertPoint(entry);
        // Obtenemos las rutas de los argumentos
        
        cout << "Buscando ruta entre: " << ruta1 << " y " << ruta2 << std::endl;
        // Aquí implementas la lógica para buscar en el Trie
        // Por ejemplo, llamamos a la función de búsqueda en el Trie
        bool found = trie.searchBinaryWord(root, ruta1) && trie.searchBinaryWord(root, ruta2);
        builder->CreateRet(builder->getInt1(found));  // Retornamos si se encontró la ruta o no
    }

    /*Function* deletePathFunction(Function* mainFunc) {
        //getInt8PtrTy()
        //FunctionType* funcType = FunctionType::get(builder->getVoidTy(), {builder->getInt8Ty()->getPointerTo()}, false);
        //Function* func = Function::Create(funcType, Function::ExternalLinkage, "deletePath", *module);
        BasicBlock* entry = BasicBlock::Create(*context, "entry", mainFuncfunc);
        builder->SetInsertPoint(entry);

        Value* ruta = &*func->arg_begin();  // Obtenemos el argumento (ruta)
        
        // Aquí agregarías la lógica para buscar la ruta en el Trie usando LLVM
        // Por ahora, retornamos falso, pero debes agregar las condiciones para verificar si la ruta está en el Trie

        builder->CreateRetVoid();  // Devuelve falso por ahora (puedes cambiar esto según la lógica)
        return func;
    }*/

    antlrcpp::Any visitGrafo(GrafoParser::GrafoContext* ctx) override {
        cout << "Visitando el grafo..." << endl;
        visitChildren(ctx);  // Visitamos todos los nodos del grafo
        printIR();           // Imprimimos el IR generado
        return nullptr;
    }

    // Visit expression
    antlrcpp::Any visitPrintExp(GrafoParser::PrintExpContext* ctx) override {
        std::cout << "Imprimiendo..." << std::endl;
        return visitChildren(ctx);
    }

    // Crear un nuevo nodo 
    antlrcpp::Any visitNuevoNodoL(GrafoParser::NuevoNodoLContext* ctx) override {
        string nombre = ctx->NOMBRENODO()->getText();  
        string ruta = ctx->RUTA()->getText();  

        cout << "Insertando nuevo nodo con ruta: " << ruta << std::endl;
        nodePath[nombre] = ruta;
    
        // Aquí agregamos la instrucción de LLVM para insertar la ruta en mainFunc
        generateInsertFunction(ruta);  // Generamos la función de inserción dentro de mainFunc
        Value* nombreValue = builder->CreateGlobalString(nombre);  // Convertir el nombre a un puntero de cadena
        Value* rutaValue = builder->CreateGlobalString(ruta);  // Convertir la ruta a un puntero de cadena
        //builder->CreateCall(insertFunc, {rutaValue});  // Llamamos a la función insertRuta

        return visitChildren(ctx);
    }

    // Cambiar la posición de un nodo
    antlrcpp::Any visitSetearPosicionL(GrafoParser::SetearPosicionLContext* ctx) override {
        string nombre = ctx->NOMBRENODO()->getText();  
        string ruta = ctx->RUTA()->getText();  
        cout << "Seteando el nodo: " << nombre << " con la ruta: " << ruta << std::endl;
        
        // Aquí agregamos la instrucción de LLVM para insertar la ruta dentro de mainFunc
        generateInsertFunction(ruta);  // Generamos la función de inserción dentro de mainFunc

        Value* rutaValue = builder->CreateGlobalString(ruta);  // Convertir la ruta a un puntero de cadena
        //builder->CreateCall(insertFunc, {rutaValue});  // Llamamos a la función insertRuta

        return visitChildren(ctx);
    }

    // Método para manejar la acción de graficar ruta
    antlrcpp::Any visitGraficarRutaL(GrafoParser::GraficarRutaLContext* ctx) override {
        string nombre = ctx->NOMBRENODO()->getText();  
        string ruta = ctx->RUTA()->getText();  
        return visitChildren(ctx);
    }

    // Método para manejar la acción de buscar una ruta
    antlrcpp::Any visitBuscarRutaL(GrafoParser::BuscarRutaLContext* ctx) override {
        string nombre1 = ctx->NOMBRENODO(0)->getText();
        string nombre2 = ctx->NOMBRENODO(1)->getText();
        string ruta1 = nodePath[nombre1];
        string ruta2 = nodePath[nombre2];

        // Verificamos si las rutas están en el trie
        cout << "Buscando ruta entre nodos: " << ruta1 << " y " << ruta2 << std::endl;

        // Aquí agregamos la instrucción de LLVM para buscar las rutas dentro de mainFunc
        generateSearchFunction(ruta1, ruta2);  // Generamos la función de búsqueda dentro de mainFunc
        Value* ruta1Value = builder->CreateGlobalString(ruta1);  // Convertir la ruta a puntero de cadena
        Value* ruta2Value = builder->CreateGlobalString(ruta2);  // Convertir la ruta a puntero de cadena
       // builder->CreateCall(searchFunction, {ruta1Value, ruta2Value});  // Llamamos a la función buscarRuta

        return visitChildren(ctx);
    }
};
