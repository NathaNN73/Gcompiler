# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /compilers/TF_COMPILADORES

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /compilers/TF_COMPILADORES/build

# Include any dependencies generated for this target.
include CMakeFiles/GrafoCompiler.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/GrafoCompiler.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/GrafoCompiler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GrafoCompiler.dir/flags.make

CMakeFiles/GrafoCompiler.dir/GrafoBaseVisitor.cpp.o: CMakeFiles/GrafoCompiler.dir/flags.make
CMakeFiles/GrafoCompiler.dir/GrafoBaseVisitor.cpp.o: /compilers/TF_COMPILADORES/GrafoBaseVisitor.cpp
CMakeFiles/GrafoCompiler.dir/GrafoBaseVisitor.cpp.o: CMakeFiles/GrafoCompiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/compilers/TF_COMPILADORES/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GrafoCompiler.dir/GrafoBaseVisitor.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GrafoCompiler.dir/GrafoBaseVisitor.cpp.o -MF CMakeFiles/GrafoCompiler.dir/GrafoBaseVisitor.cpp.o.d -o CMakeFiles/GrafoCompiler.dir/GrafoBaseVisitor.cpp.o -c /compilers/TF_COMPILADORES/GrafoBaseVisitor.cpp

CMakeFiles/GrafoCompiler.dir/GrafoBaseVisitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GrafoCompiler.dir/GrafoBaseVisitor.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /compilers/TF_COMPILADORES/GrafoBaseVisitor.cpp > CMakeFiles/GrafoCompiler.dir/GrafoBaseVisitor.cpp.i

CMakeFiles/GrafoCompiler.dir/GrafoBaseVisitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GrafoCompiler.dir/GrafoBaseVisitor.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /compilers/TF_COMPILADORES/GrafoBaseVisitor.cpp -o CMakeFiles/GrafoCompiler.dir/GrafoBaseVisitor.cpp.s

CMakeFiles/GrafoCompiler.dir/GrafoLexer.cpp.o: CMakeFiles/GrafoCompiler.dir/flags.make
CMakeFiles/GrafoCompiler.dir/GrafoLexer.cpp.o: /compilers/TF_COMPILADORES/GrafoLexer.cpp
CMakeFiles/GrafoCompiler.dir/GrafoLexer.cpp.o: CMakeFiles/GrafoCompiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/compilers/TF_COMPILADORES/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GrafoCompiler.dir/GrafoLexer.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GrafoCompiler.dir/GrafoLexer.cpp.o -MF CMakeFiles/GrafoCompiler.dir/GrafoLexer.cpp.o.d -o CMakeFiles/GrafoCompiler.dir/GrafoLexer.cpp.o -c /compilers/TF_COMPILADORES/GrafoLexer.cpp

CMakeFiles/GrafoCompiler.dir/GrafoLexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GrafoCompiler.dir/GrafoLexer.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /compilers/TF_COMPILADORES/GrafoLexer.cpp > CMakeFiles/GrafoCompiler.dir/GrafoLexer.cpp.i

CMakeFiles/GrafoCompiler.dir/GrafoLexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GrafoCompiler.dir/GrafoLexer.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /compilers/TF_COMPILADORES/GrafoLexer.cpp -o CMakeFiles/GrafoCompiler.dir/GrafoLexer.cpp.s

CMakeFiles/GrafoCompiler.dir/GrafoParser.cpp.o: CMakeFiles/GrafoCompiler.dir/flags.make
CMakeFiles/GrafoCompiler.dir/GrafoParser.cpp.o: /compilers/TF_COMPILADORES/GrafoParser.cpp
CMakeFiles/GrafoCompiler.dir/GrafoParser.cpp.o: CMakeFiles/GrafoCompiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/compilers/TF_COMPILADORES/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GrafoCompiler.dir/GrafoParser.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GrafoCompiler.dir/GrafoParser.cpp.o -MF CMakeFiles/GrafoCompiler.dir/GrafoParser.cpp.o.d -o CMakeFiles/GrafoCompiler.dir/GrafoParser.cpp.o -c /compilers/TF_COMPILADORES/GrafoParser.cpp

CMakeFiles/GrafoCompiler.dir/GrafoParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GrafoCompiler.dir/GrafoParser.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /compilers/TF_COMPILADORES/GrafoParser.cpp > CMakeFiles/GrafoCompiler.dir/GrafoParser.cpp.i

CMakeFiles/GrafoCompiler.dir/GrafoParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GrafoCompiler.dir/GrafoParser.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /compilers/TF_COMPILADORES/GrafoParser.cpp -o CMakeFiles/GrafoCompiler.dir/GrafoParser.cpp.s

CMakeFiles/GrafoCompiler.dir/GrafoVisitor.cpp.o: CMakeFiles/GrafoCompiler.dir/flags.make
CMakeFiles/GrafoCompiler.dir/GrafoVisitor.cpp.o: /compilers/TF_COMPILADORES/GrafoVisitor.cpp
CMakeFiles/GrafoCompiler.dir/GrafoVisitor.cpp.o: CMakeFiles/GrafoCompiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/compilers/TF_COMPILADORES/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/GrafoCompiler.dir/GrafoVisitor.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GrafoCompiler.dir/GrafoVisitor.cpp.o -MF CMakeFiles/GrafoCompiler.dir/GrafoVisitor.cpp.o.d -o CMakeFiles/GrafoCompiler.dir/GrafoVisitor.cpp.o -c /compilers/TF_COMPILADORES/GrafoVisitor.cpp

CMakeFiles/GrafoCompiler.dir/GrafoVisitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GrafoCompiler.dir/GrafoVisitor.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /compilers/TF_COMPILADORES/GrafoVisitor.cpp > CMakeFiles/GrafoCompiler.dir/GrafoVisitor.cpp.i

CMakeFiles/GrafoCompiler.dir/GrafoVisitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GrafoCompiler.dir/GrafoVisitor.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /compilers/TF_COMPILADORES/GrafoVisitor.cpp -o CMakeFiles/GrafoCompiler.dir/GrafoVisitor.cpp.s

CMakeFiles/GrafoCompiler.dir/main.cpp.o: CMakeFiles/GrafoCompiler.dir/flags.make
CMakeFiles/GrafoCompiler.dir/main.cpp.o: /compilers/TF_COMPILADORES/main.cpp
CMakeFiles/GrafoCompiler.dir/main.cpp.o: CMakeFiles/GrafoCompiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/compilers/TF_COMPILADORES/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/GrafoCompiler.dir/main.cpp.o"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GrafoCompiler.dir/main.cpp.o -MF CMakeFiles/GrafoCompiler.dir/main.cpp.o.d -o CMakeFiles/GrafoCompiler.dir/main.cpp.o -c /compilers/TF_COMPILADORES/main.cpp

CMakeFiles/GrafoCompiler.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GrafoCompiler.dir/main.cpp.i"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /compilers/TF_COMPILADORES/main.cpp > CMakeFiles/GrafoCompiler.dir/main.cpp.i

CMakeFiles/GrafoCompiler.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GrafoCompiler.dir/main.cpp.s"
	/usr/sbin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /compilers/TF_COMPILADORES/main.cpp -o CMakeFiles/GrafoCompiler.dir/main.cpp.s

# Object files for target GrafoCompiler
GrafoCompiler_OBJECTS = \
"CMakeFiles/GrafoCompiler.dir/GrafoBaseVisitor.cpp.o" \
"CMakeFiles/GrafoCompiler.dir/GrafoLexer.cpp.o" \
"CMakeFiles/GrafoCompiler.dir/GrafoParser.cpp.o" \
"CMakeFiles/GrafoCompiler.dir/GrafoVisitor.cpp.o" \
"CMakeFiles/GrafoCompiler.dir/main.cpp.o"

# External object files for target GrafoCompiler
GrafoCompiler_EXTERNAL_OBJECTS =

GrafoCompiler: CMakeFiles/GrafoCompiler.dir/GrafoBaseVisitor.cpp.o
GrafoCompiler: CMakeFiles/GrafoCompiler.dir/GrafoLexer.cpp.o
GrafoCompiler: CMakeFiles/GrafoCompiler.dir/GrafoParser.cpp.o
GrafoCompiler: CMakeFiles/GrafoCompiler.dir/GrafoVisitor.cpp.o
GrafoCompiler: CMakeFiles/GrafoCompiler.dir/main.cpp.o
GrafoCompiler: CMakeFiles/GrafoCompiler.dir/build.make
GrafoCompiler: /usr/local/lib/libLLVMOrcJIT.so.20.0git
GrafoCompiler: /usr/local/lib/libLLVMX86CodeGen.so.20.0git
GrafoCompiler: /usr/local/lib/libLLVMX86AsmParser.so.20.0git
GrafoCompiler: /usr/local/lib/libLLVMX86Desc.so.20.0git
GrafoCompiler: /usr/local/lib/libLLVMX86Disassembler.so.20.0git
GrafoCompiler: /usr/local/lib/libLLVMX86Info.so.20.0git
GrafoCompiler: /usr/local/lib/libLLVMExecutionEngine.so.20.0git
GrafoCompiler: /usr/local/lib/libLLVMRuntimeDyld.so.20.0git
GrafoCompiler: /usr/local/lib/libLLVMObject.so.20.0git
GrafoCompiler: /usr/local/lib/libLLVMCore.so.20.0git
GrafoCompiler: /usr/local/lib/libLLVMTargetParser.so.20.0git
GrafoCompiler: /usr/local/lib/libLLVMSupport.so.20.0git
GrafoCompiler: CMakeFiles/GrafoCompiler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/compilers/TF_COMPILADORES/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable GrafoCompiler"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GrafoCompiler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GrafoCompiler.dir/build: GrafoCompiler
.PHONY : CMakeFiles/GrafoCompiler.dir/build

CMakeFiles/GrafoCompiler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GrafoCompiler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GrafoCompiler.dir/clean

CMakeFiles/GrafoCompiler.dir/depend:
	cd /compilers/TF_COMPILADORES/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /compilers/TF_COMPILADORES /compilers/TF_COMPILADORES /compilers/TF_COMPILADORES/build /compilers/TF_COMPILADORES/build /compilers/TF_COMPILADORES/build/CMakeFiles/GrafoCompiler.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/GrafoCompiler.dir/depend

