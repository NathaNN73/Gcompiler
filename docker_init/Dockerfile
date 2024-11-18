# Imagen base de Arch Linux 
FROM archlinux:base-devel

# Directorio de trabajo dentro del contenedor
WORKDIR /TF_compilers

# Copiar todos los archivos de la carpeta TF en el contenedor
COPY ../TF /TF_compilers/

# Copiar el archivo .bashrc al directorio root del contenedor
COPY .bashrc /root/

# Dependencias necesarias
RUN pacman -Syu --noconfirm \
    && pacman -S --noconfirm git clang cmake python jdk-openjdk antlr4 antlr4-runtime neovim lld \
    && pacman -Scc --noconfirm

# Descarga y compila LLVM >_< con Clang y LLDB, configurando para que use librerías compartidas y el enlazador LLD de LLVM
RUN git clone --depth 1 https://github.com/llvm/llvm-project.git && \
    cmake -S llvm-project/llvm -B llvm-project/build \
        -G "Unix Makefiles" \
        -DLLVM_ENABLE_PROJECTS="clang;lldb" \
        -DCMAKE_INSTALL_PREFIX="/usr/local" \ 
        -DBUILD_SHARED_LIBS=ON \
        -DLLVM_USE_LINKER=lld \
        -DCMAKE_BUILD_TYPE=Release \
        -DLLVM_PARALLEL_COMPILE_JOBS=12 && \
    cmake --build llvm-project/build -j12 && \
    cmake --install llvm-project/build && \
    rm -rf llvm-project

# Validación de instalación de Clang y LLVM :D
RUN clang --version && llvm-config --version
