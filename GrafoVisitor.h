
// Generated from Grafo.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "GrafoParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by GrafoParser.
 */
class  GrafoVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by GrafoParser.
   */
    virtual std::any visitGrafo(GrafoParser::GrafoContext *context) = 0;

    virtual std::any visitPrintExp(GrafoParser::PrintExpContext *context) = 0;

    virtual std::any visitNuevoNodoL(GrafoParser::NuevoNodoLContext *context) = 0;

    virtual std::any visitSetearPosicionL(GrafoParser::SetearPosicionLContext *context) = 0;

    virtual std::any visitGraficarRutaL(GrafoParser::GraficarRutaLContext *context) = 0;

    virtual std::any visitBuscarRutaL(GrafoParser::BuscarRutaLContext *context) = 0;


};

