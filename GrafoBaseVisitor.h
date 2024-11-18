
// Generated from Grafo.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "GrafoVisitor.h"


/**
 * This class provides an empty implementation of GrafoVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  GrafoBaseVisitor : public GrafoVisitor {
public:

  virtual std::any visitGrafo(GrafoParser::GrafoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintExp(GrafoParser::PrintExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNuevoNodoL(GrafoParser::NuevoNodoLContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetearPosicionL(GrafoParser::SetearPosicionLContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGraficarRutaL(GrafoParser::GraficarRutaLContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBuscarRutaL(GrafoParser::BuscarRutaLContext *ctx) override {
    return visitChildren(ctx);
  }


};

