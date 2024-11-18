
// Generated from Grafo.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  GrafoParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, NUEVONODO = 2, SETEARPOSICION = 3, GRAFICARRUTA = 4, BUSCARRUTA = 5, 
    A = 6, NOMBRENODO = 7, RUTA = 8, WS = 9
  };

  enum {
    RuleGrafo = 0, RuleInstruccion = 1, RuleExp = 2
  };

  explicit GrafoParser(antlr4::TokenStream *input);

  GrafoParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~GrafoParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class GrafoContext;
  class InstruccionContext;
  class ExpContext; 

  class  GrafoContext : public antlr4::ParserRuleContext {
  public:
    GrafoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InstruccionContext *> instruccion();
    InstruccionContext* instruccion(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrafoContext* grafo();

  class  InstruccionContext : public antlr4::ParserRuleContext {
  public:
    InstruccionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InstruccionContext() = default;
    void copyFrom(InstruccionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrintExpContext : public InstruccionContext {
  public:
    PrintExpContext(InstruccionContext *ctx);

    ExpContext *exp();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InstruccionContext* instruccion();

  class  ExpContext : public antlr4::ParserRuleContext {
  public:
    ExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpContext() = default;
    void copyFrom(ExpContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  GraficarRutaLContext : public ExpContext {
  public:
    GraficarRutaLContext(ExpContext *ctx);

    antlr4::tree::TerminalNode *GRAFICARRUTA();
    antlr4::tree::TerminalNode *NOMBRENODO();
    antlr4::tree::TerminalNode *RUTA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BuscarRutaLContext : public ExpContext {
  public:
    BuscarRutaLContext(ExpContext *ctx);

    antlr4::tree::TerminalNode *BUSCARRUTA();
    std::vector<antlr4::tree::TerminalNode *> NOMBRENODO();
    antlr4::tree::TerminalNode* NOMBRENODO(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetearPosicionLContext : public ExpContext {
  public:
    SetearPosicionLContext(ExpContext *ctx);

    antlr4::tree::TerminalNode *SETEARPOSICION();
    antlr4::tree::TerminalNode *NOMBRENODO();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *RUTA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NuevoNodoLContext : public ExpContext {
  public:
    NuevoNodoLContext(ExpContext *ctx);

    antlr4::tree::TerminalNode *NUEVONODO();
    antlr4::tree::TerminalNode *NOMBRENODO();
    antlr4::tree::TerminalNode *RUTA();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpContext* exp();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

