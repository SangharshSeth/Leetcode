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
CMAKE_SOURCE_DIR = /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Maximum_subarray_sum_WindowsizeK

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Maximum_subarray_sum_WindowsizeK/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/flags.make

CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/main.cpp.o: CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/flags.make
CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Maximum_subarray_sum_WindowsizeK/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/main.cpp.o -c /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Maximum_subarray_sum_WindowsizeK/main.cpp

CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Maximum_subarray_sum_WindowsizeK/main.cpp > CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/main.cpp.i

CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Maximum_subarray_sum_WindowsizeK/main.cpp -o CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/main.cpp.s

# Object files for target Maximum_subarray_sum_WindowsizeK
Maximum_subarray_sum_WindowsizeK_OBJECTS = \
"CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/main.cpp.o"

# External object files for target Maximum_subarray_sum_WindowsizeK
Maximum_subarray_sum_WindowsizeK_EXTERNAL_OBJECTS =

Maximum_subarray_sum_WindowsizeK.exe: CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/main.cpp.o
Maximum_subarray_sum_WindowsizeK.exe: CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/build.make
Maximum_subarray_sum_WindowsizeK.exe: CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Maximum_subarray_sum_WindowsizeK/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Maximum_subarray_sum_WindowsizeK.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/build: Maximum_subarray_sum_WindowsizeK.exe

.PHONY : CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/build

CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/clean

CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/depend:
	cd /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Maximum_subarray_sum_WindowsizeK/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Maximum_subarray_sum_WindowsizeK /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Maximum_subarray_sum_WindowsizeK /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Maximum_subarray_sum_WindowsizeK/cmake-build-debug /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Maximum_subarray_sum_WindowsizeK/cmake-build-debug /cygdrive/c/Users/USER/Desktop/Leetcode/Leetcode/Maximum_subarray_sum_WindowsizeK/cmake-build-debug/CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Maximum_subarray_sum_WindowsizeK.dir/depend
