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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Applications/codeBase/C-Base/chapter6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Applications/codeBase/C-Base/chapter6/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/chapter6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chapter6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chapter6.dir/flags.make

CMakeFiles/chapter6.dir/cctypes.cpp.o: CMakeFiles/chapter6.dir/flags.make
CMakeFiles/chapter6.dir/cctypes.cpp.o: ../cctypes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Applications/codeBase/C-Base/chapter6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chapter6.dir/cctypes.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chapter6.dir/cctypes.cpp.o -c /Applications/codeBase/C-Base/chapter6/cctypes.cpp

CMakeFiles/chapter6.dir/cctypes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chapter6.dir/cctypes.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Applications/codeBase/C-Base/chapter6/cctypes.cpp > CMakeFiles/chapter6.dir/cctypes.cpp.i

CMakeFiles/chapter6.dir/cctypes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chapter6.dir/cctypes.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Applications/codeBase/C-Base/chapter6/cctypes.cpp -o CMakeFiles/chapter6.dir/cctypes.cpp.s

# Object files for target chapter6
chapter6_OBJECTS = \
"CMakeFiles/chapter6.dir/cctypes.cpp.o"

# External object files for target chapter6
chapter6_EXTERNAL_OBJECTS =

chapter6: CMakeFiles/chapter6.dir/cctypes.cpp.o
chapter6: CMakeFiles/chapter6.dir/build.make
chapter6: CMakeFiles/chapter6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Applications/codeBase/C-Base/chapter6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable chapter6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chapter6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chapter6.dir/build: chapter6

.PHONY : CMakeFiles/chapter6.dir/build

CMakeFiles/chapter6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chapter6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chapter6.dir/clean

CMakeFiles/chapter6.dir/depend:
	cd /Applications/codeBase/C-Base/chapter6/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Applications/codeBase/C-Base/chapter6 /Applications/codeBase/C-Base/chapter6 /Applications/codeBase/C-Base/chapter6/cmake-build-debug /Applications/codeBase/C-Base/chapter6/cmake-build-debug /Applications/codeBase/C-Base/chapter6/cmake-build-debug/CMakeFiles/chapter6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chapter6.dir/depend

