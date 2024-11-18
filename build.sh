#!/bin/bash

# Otogar permisos:
# chmod +x compile.sh 
# Eliminar carpeta build si existe
echo "Eliminando carpeta build..."
if [ -d "build" ]; then
    rm -rf build
    echo "Carpeta build eliminada."
else
    echo "La carpeta build no existe. No se requiere eliminarla."
fi

# Crear el directorio de build (si no existe) y ejecutar cmake
echo "Generando archivos de configuración con CMake..."
cmake -B build
if [ $? -ne 0 ]; then
    echo "Error en la configuración de CMake. Abortando."
    exit 1
fi
echo "Archivos de configuración generados exitosamente."

# Compilación del proyecto
echo "Compilando el proyecto..."
cmake --build build
if [ $? -ne 0 ]; then
    echo "Error en la compilación. Abortando."
    exit 1
fi
echo "Compilación completada con éxito."


# Ejecutar el programa
#echo "Creando codigo intermedio..."
#build/GrafoCompiler $1 $2 

#$1 es input.txt entonces el comando es:
./build/GrafoCompiler input.txt output.txt

