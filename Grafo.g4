grammar Grafo;

NUEVONODO
    : 'nuevoNodo' ;
SETEARPOSICION
    : 'setearPosicion' ;
GRAFICARRUTA
    : 'graficarRuta' ;
BUSCARRUTA
    : 'buscarRuta' ;
A
    : '>' ;
    
NOMBRENODO
    : [a-zA-Z][a-zA-Z0-9]* ;
RUTA
    : [01]+
    | '*'
    ;   
    
WS: [ \t\n\r]+ -> skip ;

grafo
    : instruccion+ ;
    
instruccion
    : nuevoNodo
    | setearPosicion
    | graficarRuta
    | buscarRuta
    ;
    
nuevoNodo
    : NUEVONODO NOMBRENODO RUTA           # nuevoNodoL ;
    
setearPosicion
    : SETEARPOSICION RUTA A RUTA          # setearPosicionL ;
    
graficarRuta
    : GRAFICARRUTA NOMBRENODO RUTA        # graficarRutaL ;
    
buscarRuta
    : BUSCARRUTA NOMBRENODO NOMBRENODO    # buscarRutaL ;
    
