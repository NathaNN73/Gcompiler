grammar Grafo;

grafo
    : instruccion ;
    
instruccion
    : nuevoNodo
    | setearPosicion
    | graficarRuta
    | buscarRuta
    ;
    
nuevoNodo
    : NUEVONODO NOMBRENODO RUTA
    ;         // nuevoNodo
    
setearPosicion
    : SETEARPOSICION RUTA A RUTA
    ;        // setearPosicion
    
graficarRuta
    : GRAFICARRUTA NOMBRENODO RUTA
    ;      // graficarRuta
    
buscarRuta
    : BUSCARRUTA NOMBRENODO NOMBRENODO
    ;  // buscarRuta
    
NUEVONODO
    : 'nuevoNodo' ;
SETEARPOSICION
    : 'setearPosicion' ;
GRAFICARRUTA
    : 'graficarRuta' ;
BUSCARRUTA
    : 'buscarRuta' ;
A
    : 'a' ;
    
NOMBRENODO
    : [a-zA-Z][a-zA-Z0-9]* ;
RUTA
    : [01]+
    | '*'
    ;   
    
WS: [ \t\n\r\f]+ -> skip ;
