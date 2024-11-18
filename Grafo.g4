grammar Grafo;

grafo
    : instruccion+ ;
    
instruccion:
    exp ';'                             #printExp    
    ;

exp
    : NUEVONODO NOMBRENODO RUTA         #nuevoNodoL	                
    | SETEARPOSICION NOMBRENODO A RUTA  #setearPosicionL
    | GRAFICARRUTA NOMBRENODO RUTA      #graficarRutaL	
    | BUSCARRUTA NOMBRENODO NOMBRENODO 	#buscarRutaL
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
