from GrafoParser import GrafoParser
from GrafoLexer import GrafoLexer
from GrafoVisitor import GrafoVisitor
from antlr4 import CommonTokenStream, FileStream

class VisitorCompiler(GrafoVisitor):
    def __init__(self):
        self.builder = None
        
    # Visit a parse tree produced by GrafoParser#grafo.
    def visitGrafo(self, ctx:GrafoParser.GrafoContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by GrafoParser#nuevoNodoL.
    def visitNuevoNodoL(self, ctx:GrafoParser.NuevoNodoLContext):
        print(f"Instruccion: {ctx.NUEVONODO()} {ctx.NOMBRENODO()} {ctx.RUTA()}")

    # Visit a parse tree produced by GrafoParser#setearPosicionL.
    def visitSetearPosicionL(self, ctx:GrafoParser.SetearPosicionLContext):
        print(f"Instruccion: {ctx.SETEARPOSICION()} {ctx.RUTA()[0]} {ctx.A()} {ctx.RUTA()[1]}")


    # Visit a parse tree produced by GrafoParser#graficarRutaL.
    def visitGraficarRutaL(self, ctx:GrafoParser.GraficarRutaLContext):
        print(f"Instruccion: {ctx.GRAFICARRUTA()} {ctx.NOMBRENODO()} {ctx.RUTA()}")


    # Visit a parse tree produced by GrafoParser#buscarRutaL.
    def visitBuscarRutaL(self, ctx:GrafoParser.BuscarRutaLContext):
        print(f"Instruccion: {ctx.BUSCARRUTA()} {ctx.NOMBRENODO()[0]} {ctx.NOMBRENODO()[1]}")


def compile_grafo(file_path):
    input_stream = FileStream(file_path)
    lexer = GrafoLexer(input_stream)
    stream = CommonTokenStream(lexer)
    parser = GrafoParser(stream)
    tree = parser.grafo()
    
    visitor = VisitorCompiler()
    visitor.visitGrafo(tree)

# Usage
compile_grafo("ejemplo.txt")
