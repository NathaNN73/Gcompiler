# Generated from Grafo.g4 by ANTLR 4.13.2
# encoding: utf-8
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
	from typing import TextIO
else:
	from typing.io import TextIO


from grafo import Grafo
import settings

def serializedATN():
    return [
        4,1,8,45,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,4,0,
        14,8,0,11,0,12,0,15,1,1,1,1,1,1,1,1,3,1,22,8,1,1,2,1,2,1,2,1,2,1,
        2,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,
        5,1,5,0,0,6,0,2,4,6,8,10,0,0,42,0,13,1,0,0,0,2,21,1,0,0,0,4,23,1,
        0,0,0,6,28,1,0,0,0,8,34,1,0,0,0,10,39,1,0,0,0,12,14,3,2,1,0,13,12,
        1,0,0,0,14,15,1,0,0,0,15,13,1,0,0,0,15,16,1,0,0,0,16,1,1,0,0,0,17,
        22,3,4,2,0,18,22,3,6,3,0,19,22,3,8,4,0,20,22,3,10,5,0,21,17,1,0,
        0,0,21,18,1,0,0,0,21,19,1,0,0,0,21,20,1,0,0,0,22,3,1,0,0,0,23,24,
        5,1,0,0,24,25,5,6,0,0,25,26,5,7,0,0,26,27,6,2,-1,0,27,5,1,0,0,0,
        28,29,5,2,0,0,29,30,5,7,0,0,30,31,5,5,0,0,31,32,5,7,0,0,32,33,6,
        3,-1,0,33,7,1,0,0,0,34,35,5,3,0,0,35,36,5,6,0,0,36,37,5,7,0,0,37,
        38,6,4,-1,0,38,9,1,0,0,0,39,40,5,4,0,0,40,41,5,6,0,0,41,42,5,6,0,
        0,42,43,6,5,-1,0,43,11,1,0,0,0,2,15,21
    ]

class GrafoParser ( Parser ):

    grammarFileName = "Grafo.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                     "<INVALID>", "'>'" ]

    symbolicNames = [ "<INVALID>", "NUEVONODO", "SETEARPOSICION", "GRAFICARRUTA", 
                      "BUSCARRUTA", "A", "NOMBRENODO", "RUTA", "WS" ]

    RULE_grafo = 0
    RULE_instruccion = 1
    RULE_nuevoNodo = 2
    RULE_setearPosicion = 3
    RULE_graficarRuta = 4
    RULE_buscarRuta = 5

    ruleNames =  [ "grafo", "instruccion", "nuevoNodo", "setearPosicion", 
                   "graficarRuta", "buscarRuta" ]

    EOF = Token.EOF
    NUEVONODO=1
    SETEARPOSICION=2
    GRAFICARRUTA=3
    BUSCARRUTA=4
    A=5
    NOMBRENODO=6
    RUTA=7
    WS=8

    def __init__(self, input:TokenStream, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.13.2")
        self._interp = ParserATNSimulator(self, self.atn, self.decisionsToDFA, self.sharedContextCache)
        self._predicates = None



    grafoInst = None

    def nuevoN(self, nombreNodo, ruta):
        if settings.interactivo[0] == True :
            print(f"Instruccion: nuevoNodo {nombreNodo} {ruta}")
            if ruta == '*':
                if self.grafoInst is None:
                    self.grafoInst = Grafo(nombreNodo)
                    self.grafoInst.crearGrafoDict(nombreNodo)
                else:
                    print("Error: Grafo ya fue creado")
            else:
                if self.grafoInst is None:
                    print("Error: Grafo no creado")
                else:
                    self.grafoInst.agregarNodo(nombreNodo, ruta)


    def setearP(self, rutaSetear, a, rutaNodo):
        if settings.interactivo[0] == True :
            print(f"Instruccion: setearPosicion {rutaSetear} {a} {rutaNodo}")
            if self.grafoInst is None:
                print("Error: Grafo no creado")
            else:
                self.grafoInst.setearPosicion(rutaSetear, a, rutaNodo)

    def graficarR(self, nodoInicio, ruta):
        if settings.interactivo[0] == True :
            print(f"Instruccion: graficarRuta {nodoInicio} {ruta}")
            if self.grafoInst is None:
                print("Error: Grafo no creado")
            else:
                self.grafoInst.graficarRuta(nodoInicio, ruta, True)

    def buscarR(self, nodoInicio, nodoFin):
        if settings.interactivo[0] == True :
            print(f"Instruccion: buscarRuta {nodoInicio} {nodoFin}")
            if self.grafoInst is None:
                print("Error: Grafo no creado")
            else:
                self.grafoInst.buscarRuta(nodoInicio, nodoFin)




    class GrafoContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def instruccion(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(GrafoParser.InstruccionContext)
            else:
                return self.getTypedRuleContext(GrafoParser.InstruccionContext,i)


        def getRuleIndex(self):
            return GrafoParser.RULE_grafo

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitGrafo" ):
                return visitor.visitGrafo(self)
            else:
                return visitor.visitChildren(self)




    def grafo(self):

        localctx = GrafoParser.GrafoContext(self, self._ctx, self.state)
        self.enterRule(localctx, 0, self.RULE_grafo)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 13 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 12
                self.instruccion()
                self.state = 15 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not ((((_la) & ~0x3f) == 0 and ((1 << _la) & 30) != 0)):
                    break

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class InstruccionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def nuevoNodo(self):
            return self.getTypedRuleContext(GrafoParser.NuevoNodoContext,0)


        def setearPosicion(self):
            return self.getTypedRuleContext(GrafoParser.SetearPosicionContext,0)


        def graficarRuta(self):
            return self.getTypedRuleContext(GrafoParser.GraficarRutaContext,0)


        def buscarRuta(self):
            return self.getTypedRuleContext(GrafoParser.BuscarRutaContext,0)


        def getRuleIndex(self):
            return GrafoParser.RULE_instruccion

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitInstruccion" ):
                return visitor.visitInstruccion(self)
            else:
                return visitor.visitChildren(self)




    def instruccion(self):

        localctx = GrafoParser.InstruccionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 2, self.RULE_instruccion)
        try:
            self.state = 21
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [1]:
                self.enterOuterAlt(localctx, 1)
                self.state = 17
                self.nuevoNodo()
                pass
            elif token in [2]:
                self.enterOuterAlt(localctx, 2)
                self.state = 18
                self.setearPosicion()
                pass
            elif token in [3]:
                self.enterOuterAlt(localctx, 3)
                self.state = 19
                self.graficarRuta()
                pass
            elif token in [4]:
                self.enterOuterAlt(localctx, 4)
                self.state = 20
                self.buscarRuta()
                pass
            else:
                raise NoViableAltException(self)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class NuevoNodoContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser


        def getRuleIndex(self):
            return GrafoParser.RULE_nuevoNodo

     
        def copyFrom(self, ctx:ParserRuleContext):
            super().copyFrom(ctx)



    class NuevoNodoLContext(NuevoNodoContext):

        def __init__(self, parser, ctx:ParserRuleContext): # actually a GrafoParser.NuevoNodoContext
            super().__init__(parser)
            self._NOMBRENODO = None # Token
            self._RUTA = None # Token
            self.copyFrom(ctx)

        def NUEVONODO(self):
            return self.getToken(GrafoParser.NUEVONODO, 0)
        def NOMBRENODO(self):
            return self.getToken(GrafoParser.NOMBRENODO, 0)
        def RUTA(self):
            return self.getToken(GrafoParser.RUTA, 0)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitNuevoNodoL" ):
                return visitor.visitNuevoNodoL(self)
            else:
                return visitor.visitChildren(self)



    def nuevoNodo(self):

        localctx = GrafoParser.NuevoNodoContext(self, self._ctx, self.state)
        self.enterRule(localctx, 4, self.RULE_nuevoNodo)
        try:
            localctx = GrafoParser.NuevoNodoLContext(self, localctx)
            self.enterOuterAlt(localctx, 1)
            self.state = 23
            self.match(GrafoParser.NUEVONODO)
            self.state = 24
            localctx._NOMBRENODO = self.match(GrafoParser.NOMBRENODO)
            self.state = 25
            localctx._RUTA = self.match(GrafoParser.RUTA)

            self.nuevoN((None if localctx._NOMBRENODO is None else localctx._NOMBRENODO.text), (None if localctx._RUTA is None else localctx._RUTA.text))
                
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class SetearPosicionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser


        def getRuleIndex(self):
            return GrafoParser.RULE_setearPosicion

     
        def copyFrom(self, ctx:ParserRuleContext):
            super().copyFrom(ctx)



    class SetearPosicionLContext(SetearPosicionContext):

        def __init__(self, parser, ctx:ParserRuleContext): # actually a GrafoParser.SetearPosicionContext
            super().__init__(parser)
            self.rutaSetear = None # Token
            self._A = None # Token
            self.rutaNodo = None # Token
            self.copyFrom(ctx)

        def SETEARPOSICION(self):
            return self.getToken(GrafoParser.SETEARPOSICION, 0)
        def A(self):
            return self.getToken(GrafoParser.A, 0)
        def RUTA(self, i:int=None):
            if i is None:
                return self.getTokens(GrafoParser.RUTA)
            else:
                return self.getToken(GrafoParser.RUTA, i)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitSetearPosicionL" ):
                return visitor.visitSetearPosicionL(self)
            else:
                return visitor.visitChildren(self)



    def setearPosicion(self):

        localctx = GrafoParser.SetearPosicionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 6, self.RULE_setearPosicion)
        try:
            localctx = GrafoParser.SetearPosicionLContext(self, localctx)
            self.enterOuterAlt(localctx, 1)
            self.state = 28
            self.match(GrafoParser.SETEARPOSICION)
            self.state = 29
            localctx.rutaSetear = self.match(GrafoParser.RUTA)
            self.state = 30
            localctx._A = self.match(GrafoParser.A)
            self.state = 31
            localctx.rutaNodo = self.match(GrafoParser.RUTA)

            self.setearP((None if localctx.rutaSetear is None else localctx.rutaSetear.text), (None if localctx._A is None else localctx._A.text), (None if localctx.rutaNodo is None else localctx.rutaNodo.text))
                
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class GraficarRutaContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser


        def getRuleIndex(self):
            return GrafoParser.RULE_graficarRuta

     
        def copyFrom(self, ctx:ParserRuleContext):
            super().copyFrom(ctx)



    class GraficarRutaLContext(GraficarRutaContext):

        def __init__(self, parser, ctx:ParserRuleContext): # actually a GrafoParser.GraficarRutaContext
            super().__init__(parser)
            self._NOMBRENODO = None # Token
            self._RUTA = None # Token
            self.copyFrom(ctx)

        def GRAFICARRUTA(self):
            return self.getToken(GrafoParser.GRAFICARRUTA, 0)
        def NOMBRENODO(self):
            return self.getToken(GrafoParser.NOMBRENODO, 0)
        def RUTA(self):
            return self.getToken(GrafoParser.RUTA, 0)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitGraficarRutaL" ):
                return visitor.visitGraficarRutaL(self)
            else:
                return visitor.visitChildren(self)



    def graficarRuta(self):

        localctx = GrafoParser.GraficarRutaContext(self, self._ctx, self.state)
        self.enterRule(localctx, 8, self.RULE_graficarRuta)
        try:
            localctx = GrafoParser.GraficarRutaLContext(self, localctx)
            self.enterOuterAlt(localctx, 1)
            self.state = 34
            self.match(GrafoParser.GRAFICARRUTA)
            self.state = 35
            localctx._NOMBRENODO = self.match(GrafoParser.NOMBRENODO)
            self.state = 36
            localctx._RUTA = self.match(GrafoParser.RUTA)

            self.graficarR((None if localctx._NOMBRENODO is None else localctx._NOMBRENODO.text), (None if localctx._RUTA is None else localctx._RUTA.text))
                
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class BuscarRutaContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser


        def getRuleIndex(self):
            return GrafoParser.RULE_buscarRuta

     
        def copyFrom(self, ctx:ParserRuleContext):
            super().copyFrom(ctx)



    class BuscarRutaLContext(BuscarRutaContext):

        def __init__(self, parser, ctx:ParserRuleContext): # actually a GrafoParser.BuscarRutaContext
            super().__init__(parser)
            self.nodoInicio = None # Token
            self.nodoFin = None # Token
            self.copyFrom(ctx)

        def BUSCARRUTA(self):
            return self.getToken(GrafoParser.BUSCARRUTA, 0)
        def NOMBRENODO(self, i:int=None):
            if i is None:
                return self.getTokens(GrafoParser.NOMBRENODO)
            else:
                return self.getToken(GrafoParser.NOMBRENODO, i)

        def accept(self, visitor:ParseTreeVisitor):
            if hasattr( visitor, "visitBuscarRutaL" ):
                return visitor.visitBuscarRutaL(self)
            else:
                return visitor.visitChildren(self)



    def buscarRuta(self):

        localctx = GrafoParser.BuscarRutaContext(self, self._ctx, self.state)
        self.enterRule(localctx, 10, self.RULE_buscarRuta)
        try:
            localctx = GrafoParser.BuscarRutaLContext(self, localctx)
            self.enterOuterAlt(localctx, 1)
            self.state = 39
            self.match(GrafoParser.BUSCARRUTA)
            self.state = 40
            localctx.nodoInicio = self.match(GrafoParser.NOMBRENODO)
            self.state = 41
            localctx.nodoFin = self.match(GrafoParser.NOMBRENODO)

            self.buscarR((None if localctx.nodoInicio is None else localctx.nodoInicio.text), (None if localctx.nodoFin is None else localctx.nodoFin.text))
                
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx





