# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/sbrown/Dev/SIUnits

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sbrown/Dev/SIUnits

# Include any dependencies generated for this target.
include app/CMakeFiles/CppTestApp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include app/CMakeFiles/CppTestApp.dir/compiler_depend.make

# Include the progress variables for this target.
include app/CMakeFiles/CppTestApp.dir/progress.make

# Include the compile flags for this target's objects.
include app/CMakeFiles/CppTestApp.dir/flags.make

app/CMakeFiles/CppTestApp.dir/CppTestApp.cpp.o: app/CMakeFiles/CppTestApp.dir/flags.make
app/CMakeFiles/CppTestApp.dir/CppTestApp.cpp.o: app/CppTestApp.cpp
app/CMakeFiles/CppTestApp.dir/CppTestApp.cpp.o: app/CMakeFiles/CppTestApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sbrown/Dev/SIUnits/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object app/CMakeFiles/CppTestApp.dir/CppTestApp.cpp.o"
	cd /home/sbrown/Dev/SIUnits/app && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT app/CMakeFiles/CppTestApp.dir/CppTestApp.cpp.o -MF CMakeFiles/CppTestApp.dir/CppTestApp.cpp.o.d -o CMakeFiles/CppTestApp.dir/CppTestApp.cpp.o -c /home/sbrown/Dev/SIUnits/app/CppTestApp.cpp

app/CMakeFiles/CppTestApp.dir/CppTestApp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppTestApp.dir/CppTestApp.cpp.i"
	cd /home/sbrown/Dev/SIUnits/app && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sbrown/Dev/SIUnits/app/CppTestApp.cpp > CMakeFiles/CppTestApp.dir/CppTestApp.cpp.i

app/CMakeFiles/CppTestApp.dir/CppTestApp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppTestApp.dir/CppTestApp.cpp.s"
	cd /home/sbrown/Dev/SIUnits/app && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sbrown/Dev/SIUnits/app/CppTestApp.cpp -o CMakeFiles/CppTestApp.dir/CppTestApp.cpp.s

# Object files for target CppTestApp
CppTestApp_OBJECTS = \
"CMakeFiles/CppTestApp.dir/CppTestApp.cpp.o"

# External object files for target CppTestApp
CppTestApp_EXTERNAL_OBJECTS =

CppTestApp: app/CMakeFiles/CppTestApp.dir/CppTestApp.cpp.o
CppTestApp: app/CMakeFiles/CppTestApp.dir/build.make
CppTestApp: libSIUnits.so
CppTestApp: app/CMakeFiles/CppTestApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sbrown/Dev/SIUnits/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../CppTestApp"
	cd /home/sbrown/Dev/SIUnits/app && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CppTestApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
app/CMakeFiles/CppTestApp.dir/build: CppTestApp
.PHONY : app/CMakeFiles/CppTestApp.dir/build

app/CMakeFiles/CppTestApp.dir/clean:
	cd /home/sbrown/Dev/SIUnits/app && $(CMAKE_COMMAND) -P CMakeFiles/CppTestApp.dir/cmake_clean.cmake
.PHONY : app/CMakeFiles/CppTestApp.dir/clean

app/CMakeFiles/CppTestApp.dir/depend:
	cd /home/sbrown/Dev/SIUnits && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sbrown/Dev/SIUnits /home/sbrown/Dev/SIUnits/app /home/sbrown/Dev/SIUnits /home/sbrown/Dev/SIUnits/app /home/sbrown/Dev/SIUnits/app/CMakeFiles/CppTestApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : app/CMakeFiles/CppTestApp.dir/depend

