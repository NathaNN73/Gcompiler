import graphviz
import matplotlib.pyplot as plt
import numpy as np
from nodo import Nodo
import settings

class Grafo:
    # Funciones privadas
    def __init__(self, nombre):
        self.raiz = Nodo(nombre)
        self.grafoDict = {}
        self.dot = None
        self.lenDot = 0
        self.fig = None
        self.ax = None
        self.iniBorrar = 0
        self.finBorrar = 0
        self.borrar = False
        f = open("output/instrucciones.txt", "w")
        f.write(f"nuevoNodo {nombre} *\n")
        f.close()
        self.dot = graphviz.Digraph('grafoGV', strict=True, format="png", filename= "output/grafo.gv")
        self.dot.node(nombre)
        if settings.interactivo[0] == True :
            plt.ion()
            self.fig, self.ax = plt.subplots(figsize=(9,9))
            self.ax.axis('off')
            self.dot.render("output/grafo")
            img = plt.imread("output/grafo.png")
            self.ax.imshow(img)
        #self.lenDot= len(self.dot.body)
        #print(f"lenDot: {self.lenDot}")

    def _caminarRutaPenultimo(self, ruta):
        nodo = self.raiz
        lenRuta = len(ruta)
        if lenRuta == 1:
            return nodo, ruta
        for i in range(lenRuta - 1):
            match ruta[i]:
                case '0':
                    nodo = nodo.arista0
                case '1':
                    nodo = nodo.arista1
            if nodo is None:
                break
        return nodo, ruta[-1]
    
    def _caminarRutaUltimo(self, ruta):
        nodo, arista = self._caminarRutaPenultimo(ruta)
        if nodo is None:
            print(f"Error: Ruta no existe")
        else:
            match arista:
                case '0':
                    nodo = nodo.arista0
                case '1':
                    nodo = nodo.arista1
        return nodo
        
    # Funciones publicas
    def crearGrafoDict(self, nombre):
        self.grafoDict[nombre] = self.raiz
    
    def agregarNodo(self, nombre, ruta):
        if nombre == '<missing NOMBRENODO>' or ruta == '<missing RUTA>':
            return
        try:
            self.grafoDict[nombre]
        except KeyError as e:
            nodo, arista = self._caminarRutaPenultimo(ruta)
            if nodo is None:
                print(f"Error: Ruta {ruta} no existe")
            else:
                match arista:
                    case '0':
                        if nodo.arista0 is not None:
                            print(f"Error: Arista0 de nodo '{nodo.nombre}' ya conectado")
                            return
                        else:
                            nodo.arista0 = Nodo(nombre)
                            self.grafoDict[nombre] = nodo.arista0
                            etiqueta = "0"
                    case '1':
                        if nodo.arista1 is not None:
                            print(f"Error: Arista1 de nodo '{nodo.nombre}' ya conectado")
                            return
                        else:
                            nodo.arista1 = Nodo(nombre)
                            self.grafoDict[nombre] = nodo.arista1
                            etiqueta = "1"
                f = open("output/instrucciones.txt", "a")
                f.write(f"nuevoNodo {nombre} {ruta}\n")
                f.close()
                self.dot.node(nombre)
                self.dot.edge(nodo.nombre, nombre, etiqueta)
                if settings.interactivo[0] == True :
                    self.dot.render("output/grafo")
                    img = plt.imread("output/grafo.png")
                    self.ax.imshow(img)
                #self.lenDot= len(self.dot.body)
                #print(f"lenDot: {self.lenDot}")
        else:
            print(f"Error: Nodo '{nombre}' ya existe")

    def setearPosicion(self, rutaSetear, a, rutaNodo):
        if rutaSetear == '<missing RUTA>' or a == "<missing '>'>" or rutaNodo == '<missing RUTA>':
            return
        if rutaSetear[:-1] == rutaNodo[:-1]:
            print(f"Error: Es la misma ruta")
            return
        nodo = self._caminarRutaUltimo(rutaNodo)
        if nodo is None:
            print(f"Error: Nodo {rutaNodo} no existe")
        else:
            nodoS, arista = self._caminarRutaPenultimo(rutaSetear)
            if nodoS is None:
                print(f"Error: Ruta {rutaSetear} no existe")
            else:
                match arista:
                    case '0':
                        if nodoS.arista0 is not None:
                            print(f"Error: Arista0 de nodo '{nodoS.nombre}' ya conectado")
                            return
                        else:
                            if nodoS.arista1 is not None:
                                if nodoS.arista1.nombre == nodo.nombre:
                                    print(f"Error: Nodo {nodoS.nombre} ya conectado a nodo {nodo.nombre}")
                                    return
                            nodoS.arista0 = nodo
                            etiqueta = "0"
                    case '1':
                        if nodoS.arista1 is not None:
                            print(f"Error: Arista1 de nodo '{nodoS.nombre}' ya conectado")
                            return
                        else:
                            if nodoS.arista0 is not None:
                                if nodoS.arista0.nombre == nodo.nombre:
                                    print(f"Error: Nodo {nodoS.nombre} ya conectado a nodo {nodo.nombre}")
                                    return
                            nodoS.arista1 = nodo
                            etiqueta = "1"
                f = open("output/instrucciones.txt", "a")
                f.write(f"setearPosicion {rutaSetear} > {rutaNodo}\n")
                f.close()
                self.dot.edge(nodoS.nombre, nodo.nombre, etiqueta)
                if settings.interactivo[0] == True :
                    self.dot.render("output/grafo")
                    img = plt.imread("output/grafo.png")
                    self.ax.imshow(img)
                #self.lenDot= len(self.dot.body)
                #print(f"lenDot: {self.lenDot}")

    def graficarRuta(self, nodoInicio, ruta, gR):
        if nodoInicio == '<missing NOMBRENODO>' or ruta == '<missing RUTA>':
            return
        try:
            nodoI = self.grafoDict[nodoInicio]
        except KeyError as e:
            print(f"Error: Nodo de inicio '{nodoInicio}' no existe")
        else:
            if self.borrar == True:
                del self.dot.body[self.iniBorrar:self.finBorrar]
            self.iniBorrar = len(self.dot.body)
            self.dot.node(nodoI.nombre,color="red",penwidth="3",fontcolor="red",fontname="times bold")
            nodoA = nodoI
            for i in range(len(ruta)):
                match ruta[i]:
                    case '0':
                        if nodoA.arista0 is None:
                            print(f"Error: Arista0 de nodo '{nodoA.nombre}' no existe")
                            break
                        else:
                            nodoB = nodoA.arista0
                            self.dot.node(nodoB.nombre,color="red",penwidth="3",fontcolor="red",fontname="times bold")
                            self.dot.edge(nodoA.nombre,nodoB.nombre,color="red",penwidth="3",fontcolor="red",fontname="times bold")
                            nodoA = nodoB
                    case '1':
                        if nodoA.arista1 is None:
                            print(f"Error: Arista1 de nodo '{nodoA.nombre}' no existe")
                            break
                        else:
                            nodoB = nodoA.arista1
                            self.dot.node(nodoB.nombre,color="red",penwidth="3",fontcolor="red",fontname="times bold")
                            self.dot.edge(nodoA.nombre,nodoB.nombre,color="red",penwidth="3",fontcolor="red",fontname="times bold")
                            nodoA = nodoB
            if gR == True:
                f = open("output/instrucciones.txt", "a")
                f.write(f"graficarRuta {nodoInicio} {ruta}\n")
                f.close()
            if settings.interactivo[0] == True :
                self.dot.render("output/grafo")
                img = plt.imread("output/grafo.png")
                self.ax.imshow(img)
            self.finBorrar = len(self.dot.body)
            self.borrar = True
            #print(f"iniBorrar= {self.iniBorrar} finBorrar: {self.finBorrar}")
    
    def buscarRuta(self, nodoInicio, nodoFin):
        if nodoInicio == '<missing NOMBRENODO>' or nodoFin == '<missing NOMBRENODO>':
            return
        try:
            nodoI = self.grafoDict[nodoInicio]
            nodoF = self.grafoDict[nodoFin]
        except KeyError as e:
            print(f"Error: Nodo de inicio '{nodoInicio}' y/o Nodo final '{nodoFin}' no existen")
        else:
            for n in self.grafoDict.values():
                n.visitado = False
                n.padre = None
                n.arista = None
            ruta = self.bfs(nodoInicio, nodoFin)
            if ruta is None:
                print(f"Error: No hay ruta entre nodo {nodoInicio} y nodo {nodoFin}")
                return
            self.graficarRuta(nodoInicio, ruta, False)
            f = open("output/instrucciones.txt", "a")
            f.write(f"buscarRuta {nodoInicio} {nodoFin}\n")
            f.close()

    def bfs(self,nodoInicio, nodoFin):
        queue = []
        ruta = ''
        encontroRuta = False
        raiz = self.grafoDict[nodoInicio]
        raiz.visitado = True
        queue.append(raiz)
        while queue:
            nodo = queue.pop(0)
            if nodo.nombre == nodoFin:
                encontroRuta = True
                break
            nodo0 = nodo.arista0
            nodo1 = nodo.arista1
            if nodo0 is not None and nodo0.visitado == False:
                nodo0.visitado = True
                nodo0.padre = nodo
                nodo0.arista = '0'
                queue.append(nodo0)
            if nodo1 is not None and nodo1.visitado == False:
                nodo1.visitado = True
                nodo1.padre = nodo
                nodo1.arista = '1'
                queue.append(nodo1)
        if encontroRuta:
            while nodo.nombre != nodoInicio:
                ruta = nodo.arista + ruta
                nodo = nodo.padre
        else:
            ruta = None
        return ruta

    def renderGrafo(self):
        plt.ioff()
        self.fig, self.ax = plt.subplots(figsize=(9,9))
        self.ax.axis('off')
        self.dot.render("output/grafo")
        img = plt.imread("output/grafo.png")
        self.ax.imshow(img)
        plt.show()
