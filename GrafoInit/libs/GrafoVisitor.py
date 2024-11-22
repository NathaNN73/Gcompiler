# Generated from Grafo.g4 by ANTLR 4.13.2
from antlr4 import *
if "." in __name__:
    from .GrafoParser import GrafoParser
else:
    from GrafoParser import GrafoParser

from grafo import Grafo
import settings


# This class defines a complete generic visitor for a parse tree produced by GrafoParser.

class GrafoVisitor(ParseTreeVisitor):

    # Visit a parse tree produced by GrafoParser#grafo.
    def visitGrafo(self, ctx:GrafoParser.GrafoContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by GrafoParser#instruccion.
    def visitInstruccion(self, ctx:GrafoParser.InstruccionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by GrafoParser#nuevoNodoL.
    def visitNuevoNodoL(self, ctx:GrafoParser.NuevoNodoLContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by GrafoParser#setearPosicionL.
    def visitSetearPosicionL(self, ctx:GrafoParser.SetearPosicionLContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by GrafoParser#graficarRutaL.
    def visitGraficarRutaL(self, ctx:GrafoParser.GraficarRutaLContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by GrafoParser#buscarRutaL.
    def visitBuscarRutaL(self, ctx:GrafoParser.BuscarRutaLContext):
        return self.visitChildren(ctx)



del GrafoParser