# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = "C:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:/Firmware Test/C Learning/Vector"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:/Firmware Test/C Learning/Vector"

# Include any dependencies generated for this target.
include CMakeFiles/Vector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Vector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Vector.dir/flags.make

CMakeFiles/Vector.dir/src/Vector.c.obj: CMakeFiles/Vector.dir/flags.make
CMakeFiles/Vector.dir/src/Vector.c.obj: CMakeFiles/Vector.dir/includes_C.rsp
CMakeFiles/Vector.dir/src/Vector.c.obj: src/Vector.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:/Firmware Test/C Learning/Vector/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Vector.dir/src/Vector.c.obj"
	C:/MinGW/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Vector.dir/src/Vector.c.obj -c "D:/Firmware Test/C Learning/Vector/src/Vector.c"

CMakeFiles/Vector.dir/src/Vector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Vector.dir/src/Vector.c.i"
	C:/MinGW/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:/Firmware Test/C Learning/Vector/src/Vector.c" > CMakeFiles/Vector.dir/src/Vector.c.i

CMakeFiles/Vector.dir/src/Vector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Vector.dir/src/Vector.c.s"
	C:/MinGW/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:/Firmware Test/C Learning/Vector/src/Vector.c" -o CMakeFiles/Vector.dir/src/Vector.c.s

# Object files for target Vector
Vector_OBJECTS = \
"CMakeFiles/Vector.dir/src/Vector.c.obj"

# External object files for target Vector
Vector_EXTERNAL_OBJECTS =

Vector.exe: CMakeFiles/Vector.dir/src/Vector.c.obj
Vector.exe: CMakeFiles/Vector.dir/build.make
Vector.exe: CMakeFiles/Vector.dir/linklibs.rsp
Vector.exe: CMakeFiles/Vector.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:/Firmware Test/C Learning/Vector/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Vector.exe"
	"C:/Program Files/CMake/bin/cmake.exe" -E rm -f CMakeFiles/Vector.dir/objects.a
	C:/MinGW/bin/ar.exe cr CMakeFiles/Vector.dir/objects.a @CMakeFiles/Vector.dir/objects1.rsp
	C:/MinGW/bin/gcc.exe -Wl,--whole-archive CMakeFiles/Vector.dir/objects.a -Wl,--no-whole-archive -o Vector.exe -Wl,--out-implib,libVector.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/Vector.dir/linklibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/Vector.dir/build: Vector.exe

.PHONY : CMakeFiles/Vector.dir/build

CMakeFiles/Vector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Vector.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Vector.dir/clean

CMakeFiles/Vector.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "D:/Firmware Test/C Learning/Vector" "D:/Firmware Test/C Learning/Vector" "D:/Firmware Test/C Learning/Vector" "D:/Firmware Test/C Learning/Vector" "D:/Firmware Test/C Learning/Vector/CMakeFiles/Vector.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Vector.dir/depend
