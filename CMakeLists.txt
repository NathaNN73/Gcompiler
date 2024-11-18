cmake_minimum_required(VERSION 3.13)

project(GrafoCompiler)

# Usar C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Ruta al directorio de instalación de LLVM (ajusta según tu instalación de LLVM)
find_package(LLVM REQUIRED CONFIG)


message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")


include_directories($ENV{ANTLR4I})


# Configurar las rutas de ANTLR4 desde variables de entorno
set(ANTLR4_INCLUDE_DIR $ENV{ANTLR4I})
set(ANTLR4_LIB_DIR $ENV{ANTLR4L})

# Incluir todos los archivos .cpp (incluye main.cpp y archivos generados por ANTLR4)
file(GLOB SOURCES *.cpp)

# Crear el ejecutable del proyecto
add_executable(${PROJECT_NAME} ${SOURCES})

# Incluir los directorios de ANTLR4
target_include_directories(${PROJECT_NAME} PUBLIC ${ANTLR4_INCLUDE_DIR})
target_include_directories(${PROJECT_NAME} PUBLIC ${LLVM_INCLUDE_DIRS})

#add_definitions(${LLVM_DEFINITIONS})

target_link_directories(${PROJECT_NAME} PUBLIC ${ANTLR4_LIB_DIR})

# Enlazar la biblioteca antlr4-runtime
target_link_libraries(${PROJECT_NAME} antlr4-runtime)


llvm_map_components_to_libnames(
    llvm_libs
    core
    executionengine
    object
    orcjit
    support
    targetparser
    native
)

target_link_libraries(${PROJECT_NAME} ${llvm_libs})

message(STATUS "LLVM_LIBS: ${llvm_libs}")


# Si deseas ver más información de depuración sobre la compilación de LLVM
# message(STATUS "LLVM_INCLUDE_DIRS: ${LLVM_INCLUDE_DIRS}")
# message(STATUS "LLVM_LIBRARIES: ${llvm_libs}")


# Exportar comandos de compilación para herramientas como clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)




