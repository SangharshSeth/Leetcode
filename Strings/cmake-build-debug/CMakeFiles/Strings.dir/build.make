# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/USER/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/USER/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Strings

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Strings/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Strings.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Strings.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Strings.dir/flags.make

CMakeFiles/Strings.dir/main.cpp.o: CMakeFiles/Strings.dir/flags.make
CMakeFiles/Strings.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Strings/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Strings.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Strings.dir/main.cpp.o -c /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Strings/main.cpp

CMakeFiles/Strings.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Strings.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Strings/main.cpp > CMakeFiles/Strings.dir/main.cpp.i

CMakeFiles/Strings.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Strings.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Strings/main.cpp -o CMakeFiles/Strings.dir/main.cpp.s

# Object files for target Strings
Strings_OBJECTS = \
"CMakeFiles/Strings.dir/main.cpp.o"

# External object files for target Strings
Strings_EXTERNAL_OBJECTS =

Strings.exe: CMakeFiles/Strings.dir/main.cpp.o
Strings.exe: CMakeFiles/Strings.dir/build.make
Strings.exe: CMakeFiles/Strings.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Strings/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Strings.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Strings.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Strings.dir/build: Strings.exe

.PHONY : CMakeFiles/Strings.dir/build

CMakeFiles/Strings.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Strings.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Strings.dir/clean

CMakeFiles/Strings.dir/depend:
	cd /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Strings/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Strings /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Strings /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Strings/cmake-build-debug /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Strings/cmake-build-debug /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Strings/cmake-build-debug/CMakeFiles/Strings.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Strings.dir/depend
