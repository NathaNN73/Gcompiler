from libs.GrafoParser import GrafoParser
from libs.GrafoVisitor import GrafoVisitor
from grafo import Grafo

class VisitorCompiler(GrafoVisitor):
    def __init__(self):
        self.grafo = None
        
    # Visit a parse tree produced by GrafoParser#grafo.
    def visitGrafo(self, ctx:GrafoParser.GrafoContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by GrafoParser#nuevoNodoL.
    def visitNuevoNodoL(self, ctx:GrafoParser.NuevoNodoLContext):
        print(f"Instruccion: {ctx.NUEVONODO()} {ctx.NOMBRENODO()} {ctx.RUTA()}")
        nombre = ctx.NOMBRENODO().getText()
        ruta = ctx.RUTA().getText()
        if ruta == '*':
            if self.grafo is None:
                self.grafo = Grafo(nombre)
                self.grafo.crearGrafoDict(nombre)
            else:
                print("Error: Grafo ya fue creado")
        else:
            if self.grafo is None:
                print("Error: Grafo no creado")
            else:
                self.grafo.agregarNodo(nombre, ruta)

    # Visit a parse tree produced by GrafoParser#setearPosicionL.
    def visitSetearPosicionL(self, ctx:GrafoParser.SetearPosicionLContext):
        print(f"Instruccion: {ctx.SETEARPOSICION()} {ctx.RUTA()[0]} {ctx.A()} {ctx.RUTA()[1]}")
        if self.grafo is None:
            print("Error: Grafo no creado")
        else:
            rutaSetear = ctx.RUTA()[0].getText()
            a = ctx.A().getText()
            rutaNodo = ctx.RUTA()[1].getText()
            self.grafo.setearPosicion(rutaSetear, a, rutaNodo)

    # Visit a parse tree produced by GrafoParser#graficarRutaL.
    def visitGraficarRutaL(self, ctx:GrafoParser.GraficarRutaLContext):
        print(f"Instruccion: {ctx.GRAFICARRUTA()} {ctx.NOMBRENODO()} {ctx.RUTA()}")
        if self.grafo is None:
            print("Error: Grafo no creado")
        else:
            nodoInicio = ctx.NOMBRENODO().getText()
            ruta = ctx.RUTA().getText()
            self.grafo.graficarRuta(nodoInicio, ruta, True)

    # Visit a parse tree produced by GrafoParser#buscarRutaL.
    def visitBuscarRutaL(self, ctx:GrafoParser.BuscarRutaLContext):
        print(f"Instruccion: {ctx.BUSCARRUTA()} {ctx.NOMBRENODO()[0]} {ctx.NOMBRENODO()[1]}")
        if self.grafo is None:
            print("Error: Grafo no creado")
        else:
            nodoInicio = ctx.NOMBRENODO()[0].getText()
            nodoFin = ctx.NOMBRENODO()[1].getText()
            self.grafo.buscarRuta(nodoInicio, nodoFin)
    
    def salida(self):
        self.grafo.renderGrafo()
