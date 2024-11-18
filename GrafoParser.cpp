
// Generated from Grafo.g4 by ANTLR 4.13.2


#include "GrafoVisitor.h"

#include "GrafoParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct GrafoParserStaticData final {
  GrafoParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GrafoParserStaticData(const GrafoParserStaticData&) = delete;
  GrafoParserStaticData(GrafoParserStaticData&&) = delete;
  GrafoParserStaticData& operator=(const GrafoParserStaticData&) = delete;
  GrafoParserStaticData& operator=(GrafoParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag grafoParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<GrafoParserStaticData> grafoParserStaticData = nullptr;

void grafoParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (grafoParserStaticData != nullptr) {
    return;
  }
#else
  assert(grafoParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GrafoParserStaticData>(
    std::vector<std::string>{
      "grafo", "instruccion", "exp"
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
  	4,1,9,30,2,0,7,0,2,1,7,1,2,2,7,2,1,0,4,0,8,8,0,11,0,12,0,9,1,1,1,1,1,
  	1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,28,8,2,1,2,
  	0,0,3,0,2,4,0,0,30,0,7,1,0,0,0,2,11,1,0,0,0,4,27,1,0,0,0,6,8,3,2,1,0,
  	7,6,1,0,0,0,8,9,1,0,0,0,9,7,1,0,0,0,9,10,1,0,0,0,10,1,1,0,0,0,11,12,3,
  	4,2,0,12,13,5,1,0,0,13,3,1,0,0,0,14,15,5,2,0,0,15,16,5,7,0,0,16,28,5,
  	8,0,0,17,18,5,3,0,0,18,19,5,7,0,0,19,20,5,6,0,0,20,28,5,8,0,0,21,22,5,
  	4,0,0,22,23,5,7,0,0,23,28,5,8,0,0,24,25,5,5,0,0,25,26,5,7,0,0,26,28,5,
  	7,0,0,27,14,1,0,0,0,27,17,1,0,0,0,27,21,1,0,0,0,27,24,1,0,0,0,28,5,1,
  	0,0,0,2,9,27
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  grafoParserStaticData = std::move(staticData);
}

}

GrafoParser::GrafoParser(TokenStream *input) : GrafoParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

GrafoParser::GrafoParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  GrafoParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *grafoParserStaticData->atn, grafoParserStaticData->decisionToDFA, grafoParserStaticData->sharedContextCache, options);
}

GrafoParser::~GrafoParser() {
  delete _interpreter;
}

const atn::ATN& GrafoParser::getATN() const {
  return *grafoParserStaticData->atn;
}

std::string GrafoParser::getGrammarFileName() const {
  return "Grafo.g4";
}

const std::vector<std::string>& GrafoParser::getRuleNames() const {
  return grafoParserStaticData->ruleNames;
}

const dfa::Vocabulary& GrafoParser::getVocabulary() const {
  return grafoParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GrafoParser::getSerializedATN() const {
  return grafoParserStaticData->serializedATN;
}


//----------------- GrafoContext ------------------------------------------------------------------

GrafoParser::GrafoContext::GrafoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GrafoParser::InstruccionContext *> GrafoParser::GrafoContext::instruccion() {
  return getRuleContexts<GrafoParser::InstruccionContext>();
}

GrafoParser::InstruccionContext* GrafoParser::GrafoContext::instruccion(size_t i) {
  return getRuleContext<GrafoParser::InstruccionContext>(i);
}


size_t GrafoParser::GrafoContext::getRuleIndex() const {
  return GrafoParser::RuleGrafo;
}


std::any GrafoParser::GrafoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrafoVisitor*>(visitor))
    return parserVisitor->visitGrafo(this);
  else
    return visitor->visitChildren(this);
}

GrafoParser::GrafoContext* GrafoParser::grafo() {
  GrafoContext *_localctx = _tracker.createInstance<GrafoContext>(_ctx, getState());
  enterRule(_localctx, 0, GrafoParser::RuleGrafo);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(7); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(6);
      instruccion();
      setState(9); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 60) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstruccionContext ------------------------------------------------------------------

GrafoParser::InstruccionContext::InstruccionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrafoParser::InstruccionContext::getRuleIndex() const {
  return GrafoParser::RuleInstruccion;
}

void GrafoParser::InstruccionContext::copyFrom(InstruccionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrintExpContext ------------------------------------------------------------------

GrafoParser::ExpContext* GrafoParser::PrintExpContext::exp() {
  return getRuleContext<GrafoParser::ExpContext>(0);
}

GrafoParser::PrintExpContext::PrintExpContext(InstruccionContext *ctx) { copyFrom(ctx); }


std::any GrafoParser::PrintExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrafoVisitor*>(visitor))
    return parserVisitor->visitPrintExp(this);
  else
    return visitor->visitChildren(this);
}
GrafoParser::InstruccionContext* GrafoParser::instruccion() {
  InstruccionContext *_localctx = _tracker.createInstance<InstruccionContext>(_ctx, getState());
  enterRule(_localctx, 2, GrafoParser::RuleInstruccion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<GrafoParser::PrintExpContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(11);
    exp();
    setState(12);
    match(GrafoParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

GrafoParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrafoParser::ExpContext::getRuleIndex() const {
  return GrafoParser::RuleExp;
}

void GrafoParser::ExpContext::copyFrom(ExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- GraficarRutaLContext ------------------------------------------------------------------

tree::TerminalNode* GrafoParser::GraficarRutaLContext::GRAFICARRUTA() {
  return getToken(GrafoParser::GRAFICARRUTA, 0);
}

tree::TerminalNode* GrafoParser::GraficarRutaLContext::NOMBRENODO() {
  return getToken(GrafoParser::NOMBRENODO, 0);
}

tree::TerminalNode* GrafoParser::GraficarRutaLContext::RUTA() {
  return getToken(GrafoParser::RUTA, 0);
}

GrafoParser::GraficarRutaLContext::GraficarRutaLContext(ExpContext *ctx) { copyFrom(ctx); }


std::any GrafoParser::GraficarRutaLContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrafoVisitor*>(visitor))
    return parserVisitor->visitGraficarRutaL(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BuscarRutaLContext ------------------------------------------------------------------

tree::TerminalNode* GrafoParser::BuscarRutaLContext::BUSCARRUTA() {
  return getToken(GrafoParser::BUSCARRUTA, 0);
}

std::vector<tree::TerminalNode *> GrafoParser::BuscarRutaLContext::NOMBRENODO() {
  return getTokens(GrafoParser::NOMBRENODO);
}

tree::TerminalNode* GrafoParser::BuscarRutaLContext::NOMBRENODO(size_t i) {
  return getToken(GrafoParser::NOMBRENODO, i);
}

GrafoParser::BuscarRutaLContext::BuscarRutaLContext(ExpContext *ctx) { copyFrom(ctx); }


std::any GrafoParser::BuscarRutaLContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrafoVisitor*>(visitor))
    return parserVisitor->visitBuscarRutaL(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SetearPosicionLContext ------------------------------------------------------------------

tree::TerminalNode* GrafoParser::SetearPosicionLContext::SETEARPOSICION() {
  return getToken(GrafoParser::SETEARPOSICION, 0);
}

tree::TerminalNode* GrafoParser::SetearPosicionLContext::NOMBRENODO() {
  return getToken(GrafoParser::NOMBRENODO, 0);
}

tree::TerminalNode* GrafoParser::SetearPosicionLContext::A() {
  return getToken(GrafoParser::A, 0);
}

tree::TerminalNode* GrafoParser::SetearPosicionLContext::RUTA() {
  return getToken(GrafoParser::RUTA, 0);
}

GrafoParser::SetearPosicionLContext::SetearPosicionLContext(ExpContext *ctx) { copyFrom(ctx); }


std::any GrafoParser::SetearPosicionLContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrafoVisitor*>(visitor))
    return parserVisitor->visitSetearPosicionL(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NuevoNodoLContext ------------------------------------------------------------------

tree::TerminalNode* GrafoParser::NuevoNodoLContext::NUEVONODO() {
  return getToken(GrafoParser::NUEVONODO, 0);
}

tree::TerminalNode* GrafoParser::NuevoNodoLContext::NOMBRENODO() {
  return getToken(GrafoParser::NOMBRENODO, 0);
}

tree::TerminalNode* GrafoParser::NuevoNodoLContext::RUTA() {
  return getToken(GrafoParser::RUTA, 0);
}

GrafoParser::NuevoNodoLContext::NuevoNodoLContext(ExpContext *ctx) { copyFrom(ctx); }


std::any GrafoParser::NuevoNodoLContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrafoVisitor*>(visitor))
    return parserVisitor->visitNuevoNodoL(this);
  else
    return visitor->visitChildren(this);
}
GrafoParser::ExpContext* GrafoParser::exp() {
  ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, getState());
  enterRule(_localctx, 4, GrafoParser::RuleExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(27);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrafoParser::NUEVONODO: {
        _localctx = _tracker.createInstance<GrafoParser::NuevoNodoLContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(14);
        match(GrafoParser::NUEVONODO);
        setState(15);
        match(GrafoParser::NOMBRENODO);
        setState(16);
        match(GrafoParser::RUTA);
        break;
      }

      case GrafoParser::SETEARPOSICION: {
        _localctx = _tracker.createInstance<GrafoParser::SetearPosicionLContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(17);
        match(GrafoParser::SETEARPOSICION);
        setState(18);
        match(GrafoParser::NOMBRENODO);
        setState(19);
        match(GrafoParser::A);
        setState(20);
        match(GrafoParser::RUTA);
        break;
      }

      case GrafoParser::GRAFICARRUTA: {
        _localctx = _tracker.createInstance<GrafoParser::GraficarRutaLContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(21);
        match(GrafoParser::GRAFICARRUTA);
        setState(22);
        match(GrafoParser::NOMBRENODO);
        setState(23);
        match(GrafoParser::RUTA);
        break;
      }

      case GrafoParser::BUSCARRUTA: {
        _localctx = _tracker.createInstance<GrafoParser::BuscarRutaLContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(24);
        match(GrafoParser::BUSCARRUTA);
        setState(25);
        match(GrafoParser::NOMBRENODO);
        setState(26);
        match(GrafoParser::NOMBRENODO);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void GrafoParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  grafoParserInitialize();
#else
  ::antlr4::internal::call_once(grafoParserOnceFlag, grafoParserInitialize);
#endif
}
