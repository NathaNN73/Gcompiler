import sys
from libs.GrafoParser import GrafoParser
from libs.GrafoLexer import GrafoLexer
from antlr4 import CommonTokenStream, FileStream, InputStream
from visitorCompiler import VisitorCompiler
import settings

settings.init()

def main():
    input_stream = None
    if len(sys.argv) > 1:
        settings.interactivo.append(False)
        try:
            input_stream = FileStream(sys.argv[1])
        except FileNotFoundError as e:
            print(f"Error: Archivo {sys.argv[1]} no existe")
            sys.exit()
        lexer = GrafoLexer(input_stream)
        stream = CommonTokenStream(lexer)
        parser = GrafoParser(stream)
        tree = parser.grafo()
        visitor = VisitorCompiler()
        visitor.visitGrafo(tree)
        visitor.salida()
    
    else:
        settings.interactivo.append(True)
        lineN = 1
        try:
            inst = input()
        except EOFError as e: 
            inst = 'exit'
        parser = GrafoParser(None)
        parser.buildParseTrees = False
        while inst != 'exit':
            input_stream = InputStream(inst)
            lexer = GrafoLexer(input_stream)
            lexer.line =lineN
            lexer.column = 0
            tokens = CommonTokenStream(lexer)
            parser.setInputStream(tokens)
            parser.grafo()
            try:
                inst = input()
            except EOFError as e:
                inst = 'exit'
            lineN = lineN + 1

if __name__ == '__main__':
    main()
