# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Julieth Viviana\CLionProjects\Trabajo-Colaborativo-en-C"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Julieth Viviana\CLionProjects\Trabajo-Colaborativo-en-C\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/TrabajoColaborativo.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/TrabajoColaborativo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TrabajoColaborativo.dir/flags.make

CMakeFiles/TrabajoColaborativo.dir/main.c.obj: CMakeFiles/TrabajoColaborativo.dir/flags.make
CMakeFiles/TrabajoColaborativo.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Julieth Viviana\CLionProjects\Trabajo-Colaborativo-en-C\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TrabajoColaborativo.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TrabajoColaborativo.dir\main.c.obj -c "C:\Users\Julieth Viviana\CLionProjects\Trabajo-Colaborativo-en-C\main.c"

CMakeFiles/TrabajoColaborativo.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TrabajoColaborativo.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Julieth Viviana\CLionProjects\Trabajo-Colaborativo-en-C\main.c" > CMakeFiles\TrabajoColaborativo.dir\main.c.i

CMakeFiles/TrabajoColaborativo.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TrabajoColaborativo.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Julieth Viviana\CLionProjects\Trabajo-Colaborativo-en-C\main.c" -o CMakeFiles\TrabajoColaborativo.dir\main.c.s

# Object files for target TrabajoColaborativo
TrabajoColaborativo_OBJECTS = \
"CMakeFiles/TrabajoColaborativo.dir/main.c.obj"

# External object files for target TrabajoColaborativo
TrabajoColaborativo_EXTERNAL_OBJECTS =

TrabajoColaborativo.exe: CMakeFiles/TrabajoColaborativo.dir/main.c.obj
TrabajoColaborativo.exe: CMakeFiles/TrabajoColaborativo.dir/build.make
TrabajoColaborativo.exe: CMakeFiles/TrabajoColaborativo.dir/linklibs.rsp
TrabajoColaborativo.exe: CMakeFiles/TrabajoColaborativo.dir/objects1.rsp
TrabajoColaborativo.exe: CMakeFiles/TrabajoColaborativo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Julieth Viviana\CLionProjects\Trabajo-Colaborativo-en-C\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable TrabajoColaborativo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TrabajoColaborativo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TrabajoColaborativo.dir/build: TrabajoColaborativo.exe
.PHONY : CMakeFiles/TrabajoColaborativo.dir/build

CMakeFiles/TrabajoColaborativo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TrabajoColaborativo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TrabajoColaborativo.dir/clean

CMakeFiles/TrabajoColaborativo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Julieth Viviana\CLionProjects\Trabajo-Colaborativo-en-C" "C:\Users\Julieth Viviana\CLionProjects\Trabajo-Colaborativo-en-C" "C:\Users\Julieth Viviana\CLionProjects\Trabajo-Colaborativo-en-C\cmake-build-debug" "C:\Users\Julieth Viviana\CLionProjects\Trabajo-Colaborativo-en-C\cmake-build-debug" "C:\Users\Julieth Viviana\CLionProjects\Trabajo-Colaborativo-en-C\cmake-build-debug\CMakeFiles\TrabajoColaborativo.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/TrabajoColaborativo.dir/depend

