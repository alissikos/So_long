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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/aheidy/so_long

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/aheidy/so_long/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/so_long.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/so_long.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/so_long.dir/flags.make

CMakeFiles/so_long.dir/so_long.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/so_long.c.o: ../so_long.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/so_long.dir/so_long.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/so_long.dir/so_long.c.o -c /Users/aheidy/so_long/so_long.c

CMakeFiles/so_long.dir/so_long.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/so_long.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/so_long/so_long.c > CMakeFiles/so_long.dir/so_long.c.i

CMakeFiles/so_long.dir/so_long.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/so_long.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/so_long/so_long.c -o CMakeFiles/so_long.dir/so_long.c.s

# Object files for target so_long
so_long_OBJECTS = \
"CMakeFiles/so_long.dir/so_long.c.o"

# External object files for target so_long
so_long_EXTERNAL_OBJECTS =

so_long: CMakeFiles/so_long.dir/so_long.c.o
so_long: CMakeFiles/so_long.dir/build.make
so_long: CMakeFiles/so_long.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable so_long"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/so_long.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/so_long.dir/build: so_long
.PHONY : CMakeFiles/so_long.dir/build

CMakeFiles/so_long.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/so_long.dir/cmake_clean.cmake
.PHONY : CMakeFiles/so_long.dir/clean

CMakeFiles/so_long.dir/depend:
	cd /Users/aheidy/so_long/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aheidy/so_long /Users/aheidy/so_long /Users/aheidy/so_long/cmake-build-debug /Users/aheidy/so_long/cmake-build-debug /Users/aheidy/so_long/cmake-build-debug/CMakeFiles/so_long.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/so_long.dir/depend

