
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"

#include <iostream>
#include <map>
#include <string>
#include <stdexcept>

using namespace llvm;
using namespace std;

class Trie {
private:
    LLVMContext* context;  // Contexto de LLVM
    Module* module;        // Módulo de LLVM
    IRBuilder<>* builder;  // Builder de LLVM

    // Representación simple de un nodo Trie binario (solo 0 y 1 como hijos)
    StructType* getBinaryTrieNodeType() {
        // Definimos el tipo del nodo
        Type* childType = PointerType::get(Type::getInt8Ty(*context), 0); //char
        Type* isEndOfWordType = Type::getInt1Ty(*context); //bool
        vector<Type*> nodeFields = { childType, childType, isEndOfWordType }; //0 y 1 como hijos y un booleano para saber si es fin de palabra
        return StructType::create(*context, nodeFields, "BinaryTrieNode");
    }

public:
    // Constructor que recibe contexto, módulo y builder
    Trie(unique_ptr<LLVMContext> &ctx, unique_ptr<Module> &mod,unique_ptr<IRBuilder<>>& irb){
        //setUpExternalFunctions();
        context = ctx.get();
        module = mod.get();
        builder = irb.get();
    }

    // Crear un nodo Trie binario
    Value* createBinaryTrieNode() {
        // Definimos el tipo del nodo
        StructType* nodeType = getBinaryTrieNodeType();
        PointerType* nodePtrType = PointerType::get(nodeType, 0);

        // Creamos el nodo
        Value* node = builder->CreateAlloca(nodeType, nullptr, "node");

        // Inicializamos los punteros hijos a null
        for (int i = 0; i < 2; ++i) {
            Value* childPtr = builder->CreateInBoundsGEP(nodeType, node, 
                                                        { builder->getInt32(0), builder->getInt32(i) });
            builder->CreateStore(Constant::getNullValue(nodePtrType), childPtr);
        }

        // Inicializamos el campo isEndOfWord a false
        Value* endOfWordPtr = builder->CreateInBoundsGEP(nodeType, node, 
                                                        { builder->getInt32(0), builder->getInt32(2) });
        builder->CreateStore(ConstantInt::getFalse(*context), endOfWordPtr);

        return node;
    }


    // Función para insertar una palabra binaria en el Trie
    void insertBinaryWord(Value* root, const string& word) {
        StructType* nodeType = getBinaryTrieNodeType();

        for (char c : word) {
            if (c != '0' && c != '1') {
                throw invalid_argument("La palabra debe contener solo '0' o '1'.");
            }

            int index = c - '0'; // Convertir '0' o '1' a entero

            // Obtener el puntero al hijo
            Value* childPtr = builder->CreateInBoundsGEP(
                nodeType, root,
                { builder->getInt32(0), builder->getInt32(index) });

            // Cargar el valor del hijo
            Value* child = builder->CreateLoad(PointerType::get(nodeType, 0), childPtr);

            // Crear nodo si no existe
            Value* isNull = builder->CreateICmpEQ(
                child, Constant::getNullValue(PointerType::get(nodeType, 0)));

            BasicBlock* createNodeBlock = BasicBlock::Create(*context, "createNode", builder->GetInsertBlock()->getParent());
            BasicBlock* nextNodeBlock = BasicBlock::Create(*context, "nextNode", builder->GetInsertBlock()->getParent());

            builder->CreateCondBr(isNull, createNodeBlock, nextNodeBlock);

            // Crear nodo si es necesario
            builder->SetInsertPoint(createNodeBlock);
            Value* newNode = createBinaryTrieNode();
            builder->CreateStore(newNode, childPtr);
            builder->CreateBr(nextNodeBlock);

            // Continuar al siguiente nodo
            builder->SetInsertPoint(nextNodeBlock);
            child = builder->CreateLoad(PointerType::get(nodeType, 0), childPtr);
            root = child;
        }

        // Marcar el último nodo como fin de palabra
        Value* endOfWordPtr = builder->CreateInBoundsGEP(
            nodeType, root,
            { builder->getInt32(0), builder->getInt32(2) });
        builder->CreateStore(ConstantInt::getTrue(*context), endOfWordPtr);
    }



    Value* searchBinaryWord(Value* root, const string& word) {
        StructType* nodeType = getBinaryTrieNodeType();

        BasicBlock* currentBlock = builder->GetInsertBlock();
        Function* parentFunction = currentBlock->getParent();

        BasicBlock* notFoundBlock = BasicBlock::Create(*context, "notFound", parentFunction);
        BasicBlock* endCheckBlock = BasicBlock::Create(*context, "endCheck", parentFunction);
        BasicBlock* returnBlock = BasicBlock::Create(*context, "return", parentFunction);

        for (char c : word) {
            if (c != '0' && c != '1') {
                throw invalid_argument("La palabra debe contener solo '0' o '1'.");
            }

            int index = c - '0'; // Convertir '0' o '1' a entero

            // Obtener el puntero al hijo
            Value* childPtr = builder->CreateInBoundsGEP(
                nodeType, root,
                { builder->getInt32(0), builder->getInt32(index) });

            // Cargar el valor del hijo
            Value* child = builder->CreateLoad(PointerType::get(nodeType, 0), childPtr);

            // Si el hijo es null, saltar al bloque notFound
            Value* isNull = builder->CreateICmpEQ(
                child, Constant::getNullValue(PointerType::get(nodeType, 0)));
            builder->CreateCondBr(isNull, notFoundBlock, endCheckBlock);

            // Continuar al siguiente nodo
            builder->SetInsertPoint(endCheckBlock);
            root = child;
        }

        // Verificar si el último nodo es un nodo de fin de palabra
        builder->SetInsertPoint(endCheckBlock);
        Value* endOfWordPtr = builder->CreateInBoundsGEP(
            nodeType, root,
            { builder->getInt32(0), builder->getInt32(2) });
        Value* isEnd = builder->CreateLoad(Type::getInt1Ty(*context), endOfWordPtr);
        builder->CreateBr(returnBlock);

        // Configurar bloques de retorno
        builder->SetInsertPoint(notFoundBlock);
        builder->CreateRet(ConstantInt::getFalse(*context));

        builder->SetInsertPoint(returnBlock);
        PHINode* result = builder->CreatePHI(Type::getInt1Ty(*context), 2, "result");
        result->addIncoming(ConstantInt::getFalse(*context), notFoundBlock);
        result->addIncoming(isEnd, endCheckBlock);
        builder->CreateRet(result);

        return result;
    }





    void printIR() {
        module->print(llvm::outs(), nullptr);
    }

    void setUpExternalFunctions() {
        // Crear el prototipo de la función printf
        FunctionType* printfType = FunctionType::get(
            Type::getInt32Ty(*context), 
            PointerType::get(Type::getInt8Ty(*context), 0), 
            true);
        module->getOrInsertFunction("printf", printfType);
    }

    string ValueToString(Value* value){
        string str;
        raw_string_ostream rso(str);
        value->print(rso);
        return rso.str();
    }
};

