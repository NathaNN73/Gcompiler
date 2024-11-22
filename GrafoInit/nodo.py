class Nodo:
    def __init__(self, nombre):
        self.nombre = nombre
        self.arista0 = None
        self.arista1 = None
        self.visitado = False
        self.padre = None
        self.arista = None

    def __str__(self):
        return f"-> {self.nombre}"
