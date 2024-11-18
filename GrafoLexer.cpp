
// Generated from Grafo.g4 by ANTLR 4.13.2


#include "GrafoLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct GrafoLexerStaticData final {
  GrafoLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GrafoLexerStaticData(const GrafoLexerStaticData&) = delete;
  GrafoLexerStaticData(GrafoLexerStaticData&&) = delete;
  GrafoLexerStaticData& operator=(const GrafoLexerStaticData&) = delete;
  GrafoLexerStaticData& operator=(GrafoLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag grafolexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<GrafoLexerStaticData> grafolexerLexerStaticData = nullptr;

void grafolexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (grafolexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(grafolexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GrafoLexerStaticData>(
    std::vector<std::string>{
      "T__0", "NUEVONODO", "SETEARPOSICION", "GRAFICARRUTA", "BUSCARRUTA", 
      "A", "NOMBRENODO", "RUTA", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "';'", "", "", "", "", "'>'"
    },
    std::vector<std::string>{
      "", "", "NUEVONODO", "SETEARPOSICION", "GRAFICARRUTA", "BUSCARRUTA", 
      "A", "NOMBRENODO", "RUTA", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,9,106,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	3,1,33,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,3,2,51,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,3,3,67,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,81,
  	8,4,1,5,1,5,1,6,1,6,5,6,87,8,6,10,6,12,6,90,9,6,1,7,4,7,93,8,7,11,7,12,
  	7,94,1,7,3,7,98,8,7,1,8,4,8,101,8,8,11,8,12,8,102,1,8,1,8,0,0,9,1,1,3,
  	2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,1,0,4,2,0,65,90,97,122,3,0,48,57,65,
  	90,97,122,1,0,48,49,3,0,9,10,13,13,32,32,113,0,1,1,0,0,0,0,3,1,0,0,0,
  	0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,
  	0,0,0,0,17,1,0,0,0,1,19,1,0,0,0,3,32,1,0,0,0,5,50,1,0,0,0,7,66,1,0,0,
  	0,9,80,1,0,0,0,11,82,1,0,0,0,13,84,1,0,0,0,15,97,1,0,0,0,17,100,1,0,0,
  	0,19,20,5,59,0,0,20,2,1,0,0,0,21,22,5,110,0,0,22,23,5,117,0,0,23,24,5,
  	101,0,0,24,25,5,118,0,0,25,26,5,111,0,0,26,27,5,78,0,0,27,28,5,111,0,
  	0,28,29,5,100,0,0,29,33,5,111,0,0,30,31,5,110,0,0,31,33,5,78,0,0,32,21,
  	1,0,0,0,32,30,1,0,0,0,33,4,1,0,0,0,34,35,5,115,0,0,35,36,5,101,0,0,36,
  	37,5,116,0,0,37,38,5,101,0,0,38,39,5,97,0,0,39,40,5,114,0,0,40,41,5,80,
  	0,0,41,42,5,111,0,0,42,43,5,115,0,0,43,44,5,105,0,0,44,45,5,99,0,0,45,
  	46,5,105,0,0,46,47,5,111,0,0,47,51,5,110,0,0,48,49,5,115,0,0,49,51,5,
  	80,0,0,50,34,1,0,0,0,50,48,1,0,0,0,51,6,1,0,0,0,52,53,5,103,0,0,53,54,
  	5,114,0,0,54,55,5,97,0,0,55,56,5,102,0,0,56,57,5,105,0,0,57,58,5,99,0,
  	0,58,59,5,97,0,0,59,60,5,114,0,0,60,61,5,82,0,0,61,62,5,117,0,0,62,63,
  	5,116,0,0,63,67,5,97,0,0,64,65,5,103,0,0,65,67,5,82,0,0,66,52,1,0,0,0,
  	66,64,1,0,0,0,67,8,1,0,0,0,68,69,5,98,0,0,69,70,5,117,0,0,70,71,5,115,
  	0,0,71,72,5,99,0,0,72,73,5,97,0,0,73,74,5,114,0,0,74,75,5,82,0,0,75,76,
  	5,117,0,0,76,77,5,116,0,0,77,81,5,97,0,0,78,79,5,98,0,0,79,81,5,82,0,
  	0,80,68,1,0,0,0,80,78,1,0,0,0,81,10,1,0,0,0,82,83,5,62,0,0,83,12,1,0,
  	0,0,84,88,7,0,0,0,85,87,7,1,0,0,86,85,1,0,0,0,87,90,1,0,0,0,88,86,1,0,
  	0,0,88,89,1,0,0,0,89,14,1,0,0,0,90,88,1,0,0,0,91,93,7,2,0,0,92,91,1,0,
  	0,0,93,94,1,0,0,0,94,92,1,0,0,0,94,95,1,0,0,0,95,98,1,0,0,0,96,98,5,42,
  	0,0,97,92,1,0,0,0,97,96,1,0,0,0,98,16,1,0,0,0,99,101,7,3,0,0,100,99,1,
  	0,0,0,101,102,1,0,0,0,102,100,1,0,0,0,102,103,1,0,0,0,103,104,1,0,0,0,
  	104,105,6,8,0,0,105,18,1,0,0,0,9,0,32,50,66,80,88,94,97,102,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  grafolexerLexerStaticData = std::move(staticData);
}

}

GrafoLexer::GrafoLexer(CharStream *input) : Lexer(input) {
  GrafoLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *grafolexerLexerStaticData->atn, grafolexerLexerStaticData->decisionToDFA, grafolexerLexerStaticData->sharedContextCache);
}

GrafoLexer::~GrafoLexer() {
  delete _interpreter;
}

std::string GrafoLexer::getGrammarFileName() const {
  return "Grafo.g4";
}

const std::vector<std::string>& GrafoLexer::getRuleNames() const {
  return grafolexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& GrafoLexer::getChannelNames() const {
  return grafolexerLexerStaticData->channelNames;
}

const std::vector<std::string>& GrafoLexer::getModeNames() const {
  return grafolexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& GrafoLexer::getVocabulary() const {
  return grafolexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GrafoLexer::getSerializedATN() const {
  return grafolexerLexerStaticData->serializedATN;
}

const atn::ATN& GrafoLexer::getATN() const {
  return *grafolexerLexerStaticData->atn;
}




void GrafoLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  grafolexerLexerInitialize();
#else
  ::antlr4::internal::call_once(grafolexerLexerOnceFlag, grafolexerLexerInitialize);
#endif
}
