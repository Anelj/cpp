# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/elena/clion-2021.2.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/elena/clion-2021.2.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/elena/CLionProjects/cpp00

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/elena/CLionProjects/cpp00/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cpp00.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/cpp00.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp00.dir/flags.make

CMakeFiles/cpp00.dir/main.cpp.o: CMakeFiles/cpp00.dir/flags.make
CMakeFiles/cpp00.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elena/CLionProjects/cpp00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpp00.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp00.dir/main.cpp.o -c /home/elena/CLionProjects/cpp00/main.cpp

CMakeFiles/cpp00.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp00.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elena/CLionProjects/cpp00/main.cpp > CMakeFiles/cpp00.dir/main.cpp.i

CMakeFiles/cpp00.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp00.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elena/CLionProjects/cpp00/main.cpp -o CMakeFiles/cpp00.dir/main.cpp.s

# Object files for target cpp00
cpp00_OBJECTS = \
"CMakeFiles/cpp00.dir/main.cpp.o"

# External object files for target cpp00
cpp00_EXTERNAL_OBJECTS =

cpp00: CMakeFiles/cpp00.dir/main.cpp.o
cpp00: CMakeFiles/cpp00.dir/build.make
cpp00: CMakeFiles/cpp00.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elena/CLionProjects/cpp00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cpp00"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp00.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp00.dir/build: cpp00
.PHONY : CMakeFiles/cpp00.dir/build

CMakeFiles/cpp00.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpp00.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpp00.dir/clean

CMakeFiles/cpp00.dir/depend:
	cd /home/elena/CLionProjects/cpp00/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elena/CLionProjects/cpp00 /home/elena/CLionProjects/cpp00 /home/elena/CLionProjects/cpp00/cmake-build-debug /home/elena/CLionProjects/cpp00/cmake-build-debug /home/elena/CLionProjects/cpp00/cmake-build-debug/CMakeFiles/cpp00.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpp00.dir/depend
