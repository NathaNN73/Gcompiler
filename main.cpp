#include <iostream>
#include <fstream>

#include "GrafoDriver.h"

using namespace llvm;
using namespace std;

/*void init(){
    unique_ptr<LLVMContext> context = make_unique<LLVMContext>();
    unique_ptr<Module> module = make_unique<Module>("GrafoDriver", *context);
    unique_ptr<IRBuilder<>> builder = make_unique<IRBuilder<>>(*context);

    
    auto FunctionType = llvm::FunctionType::get(Type::getInt32Ty(*context), false);
    auto mainFunc = llvm::Function::Create(
        FunctionType,
        Function::ExternalLinkage,
        "main",
        *module
    );

    auto entry = llvm::BasicBlock::Create(*context, "entry", mainFunc);
    builder->SetInsertPoint(entry);

    Trie trie(context, module, builder);

    Value* root = trie.createBinaryTrieNode();

    trie.insertBinaryWord(root, "1");
   
    Value* result = trie.searchBinaryWord(root, "1");

    if (ConstantInt* CI = dyn_cast<ConstantInt>(result)) {
        bool found = CI->getValue().getBoolValue();
        cout << "Palabra encontrada: " << (found ? "Sí" : "No") << endl;
    } else {
        cout << "Resultado inválido." << endl;
    }
    
    builder->CreateRet(builder->getInt32(0));

   
    error_code errorCode;
    llvm::raw_fd_ostream TrieModule("TrieModule.ll", errorCode);
    module->print(TrieModule, nullptr);
    
}*/


int main(int argc, const char* argv[]) {
    ifstream stream;
    stream.open(argv[1]);
    ANTLRInputStream input(stream);
    GrafoLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    GrafoParser parser(&tokens);

    tree::ParseTree* tree = parser.grafo();
    GrafoDriver* driver = new GrafoDriver();
    driver->visit(tree);

    return 0;
}
