grammar Grafo;

@header {
from grafo import Grafo
import settings
}

@parser::members {
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

}

grafo
    : instruccion+ ;
    
instruccion
    : nuevoNodo			
    | setearPosicion	
    | graficarRuta		
    | buscarRuta		
    ;
    
nuevoNodo
    : NUEVONODO NOMBRENODO RUTA {
self.nuevoN($NOMBRENODO.text, $RUTA.text)
    }
    # nuevoNodoL
    ;
       
setearPosicion
    : SETEARPOSICION rutaSetear=RUTA A rutaNodo=RUTA {
self.setearP($rutaSetear.text, $A.text, $rutaNodo.text)
    }		
    # setearPosicionL
    ;
    
graficarRuta
    : GRAFICARRUTA NOMBRENODO RUTA {
self.graficarR($NOMBRENODO.text, $RUTA.text)
    }
    # graficarRutaL
    ;
    
buscarRuta
    : BUSCARRUTA nodoInicio=NOMBRENODO nodoFin=NOMBRENODO {
self.buscarR($nodoInicio.text, $nodoFin.text)
    }
    # buscarRutaL
    ;
    
NUEVONODO
    : 'nuevoNodo'
    | 'nN'
    ;
SETEARPOSICION
    : 'setearPosicion'
    | 'sP'
    ;
GRAFICARRUTA
    : 'graficarRuta'
    | 'gR'
    ;
BUSCARRUTA
    : 'buscarRuta'
    | 'bR'
    ;
A
    : '>'
    ;
NOMBRENODO
    : [a-zA-Z][a-zA-Z0-9]*
    ;
RUTA
    : [01]+
    | '*'
    ;   
WS: [ \t\n\r]+ -> skip ;
