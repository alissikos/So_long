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
include CMakeFiles/actions.c.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/actions.c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/actions.c.dir/flags.make

CMakeFiles/actions.c.dir/actions_utils.c.o: CMakeFiles/actions.c.dir/flags.make
CMakeFiles/actions.c.dir/actions_utils.c.o: ../actions_utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/actions.c.dir/actions_utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/actions.c.dir/actions_utils.c.o -c /Users/aheidy/so_long/actions_utils.c

CMakeFiles/actions.c.dir/actions_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/actions.c.dir/actions_utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/so_long/actions_utils.c > CMakeFiles/actions.c.dir/actions_utils.c.i

CMakeFiles/actions.c.dir/actions_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/actions.c.dir/actions_utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/so_long/actions_utils.c -o CMakeFiles/actions.c.dir/actions_utils.c.s

CMakeFiles/actions.c.dir/animation.c.o: CMakeFiles/actions.c.dir/flags.make
CMakeFiles/actions.c.dir/animation.c.o: ../animation.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/actions.c.dir/animation.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/actions.c.dir/animation.c.o -c /Users/aheidy/so_long/animation.c

CMakeFiles/actions.c.dir/animation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/actions.c.dir/animation.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/so_long/animation.c > CMakeFiles/actions.c.dir/animation.c.i

CMakeFiles/actions.c.dir/animation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/actions.c.dir/animation.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/so_long/animation.c -o CMakeFiles/actions.c.dir/animation.c.s

CMakeFiles/actions.c.dir/clean.c.o: CMakeFiles/actions.c.dir/flags.make
CMakeFiles/actions.c.dir/clean.c.o: ../clean.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/actions.c.dir/clean.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/actions.c.dir/clean.c.o -c /Users/aheidy/so_long/clean.c

CMakeFiles/actions.c.dir/clean.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/actions.c.dir/clean.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/so_long/clean.c > CMakeFiles/actions.c.dir/clean.c.i

CMakeFiles/actions.c.dir/clean.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/actions.c.dir/clean.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/so_long/clean.c -o CMakeFiles/actions.c.dir/clean.c.s

CMakeFiles/actions.c.dir/error.c.o: CMakeFiles/actions.c.dir/flags.make
CMakeFiles/actions.c.dir/error.c.o: ../error.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/actions.c.dir/error.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/actions.c.dir/error.c.o -c /Users/aheidy/so_long/error.c

CMakeFiles/actions.c.dir/error.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/actions.c.dir/error.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/so_long/error.c > CMakeFiles/actions.c.dir/error.c.i

CMakeFiles/actions.c.dir/error.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/actions.c.dir/error.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/so_long/error.c -o CMakeFiles/actions.c.dir/error.c.s

CMakeFiles/actions.c.dir/game_end.c.o: CMakeFiles/actions.c.dir/flags.make
CMakeFiles/actions.c.dir/game_end.c.o: ../game_end.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/actions.c.dir/game_end.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/actions.c.dir/game_end.c.o -c /Users/aheidy/so_long/game_end.c

CMakeFiles/actions.c.dir/game_end.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/actions.c.dir/game_end.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/so_long/game_end.c > CMakeFiles/actions.c.dir/game_end.c.i

CMakeFiles/actions.c.dir/game_end.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/actions.c.dir/game_end.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/so_long/game_end.c -o CMakeFiles/actions.c.dir/game_end.c.s

CMakeFiles/actions.c.dir/game_utils.c.o: CMakeFiles/actions.c.dir/flags.make
CMakeFiles/actions.c.dir/game_utils.c.o: ../game_utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/actions.c.dir/game_utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/actions.c.dir/game_utils.c.o -c /Users/aheidy/so_long/game_utils.c

CMakeFiles/actions.c.dir/game_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/actions.c.dir/game_utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/so_long/game_utils.c > CMakeFiles/actions.c.dir/game_utils.c.i

CMakeFiles/actions.c.dir/game_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/actions.c.dir/game_utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/so_long/game_utils.c -o CMakeFiles/actions.c.dir/game_utils.c.s

CMakeFiles/actions.c.dir/get_next_line.c.o: CMakeFiles/actions.c.dir/flags.make
CMakeFiles/actions.c.dir/get_next_line.c.o: ../get_next_line.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/actions.c.dir/get_next_line.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/actions.c.dir/get_next_line.c.o -c /Users/aheidy/so_long/get_next_line.c

CMakeFiles/actions.c.dir/get_next_line.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/actions.c.dir/get_next_line.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/so_long/get_next_line.c > CMakeFiles/actions.c.dir/get_next_line.c.i

CMakeFiles/actions.c.dir/get_next_line.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/actions.c.dir/get_next_line.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/so_long/get_next_line.c -o CMakeFiles/actions.c.dir/get_next_line.c.s

CMakeFiles/actions.c.dir/image.c.o: CMakeFiles/actions.c.dir/flags.make
CMakeFiles/actions.c.dir/image.c.o: ../image.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/actions.c.dir/image.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/actions.c.dir/image.c.o -c /Users/aheidy/so_long/image.c

CMakeFiles/actions.c.dir/image.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/actions.c.dir/image.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/so_long/image.c > CMakeFiles/actions.c.dir/image.c.i

CMakeFiles/actions.c.dir/image.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/actions.c.dir/image.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/so_long/image.c -o CMakeFiles/actions.c.dir/image.c.s

CMakeFiles/actions.c.dir/init.c.o: CMakeFiles/actions.c.dir/flags.make
CMakeFiles/actions.c.dir/init.c.o: ../init.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/actions.c.dir/init.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/actions.c.dir/init.c.o -c /Users/aheidy/so_long/init.c

CMakeFiles/actions.c.dir/init.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/actions.c.dir/init.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/so_long/init.c > CMakeFiles/actions.c.dir/init.c.i

CMakeFiles/actions.c.dir/init.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/actions.c.dir/init.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/so_long/init.c -o CMakeFiles/actions.c.dir/init.c.s

CMakeFiles/actions.c.dir/libft.c.o: CMakeFiles/actions.c.dir/flags.make
CMakeFiles/actions.c.dir/libft.c.o: ../libft.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/actions.c.dir/libft.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/actions.c.dir/libft.c.o -c /Users/aheidy/so_long/libft.c

CMakeFiles/actions.c.dir/libft.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/actions.c.dir/libft.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/so_long/libft.c > CMakeFiles/actions.c.dir/libft.c.i

CMakeFiles/actions.c.dir/libft.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/actions.c.dir/libft.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/so_long/libft.c -o CMakeFiles/actions.c.dir/libft.c.s

CMakeFiles/actions.c.dir/map.c.o: CMakeFiles/actions.c.dir/flags.make
CMakeFiles/actions.c.dir/map.c.o: ../map.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/actions.c.dir/map.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/actions.c.dir/map.c.o -c /Users/aheidy/so_long/map.c

CMakeFiles/actions.c.dir/map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/actions.c.dir/map.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/so_long/map.c > CMakeFiles/actions.c.dir/map.c.i

CMakeFiles/actions.c.dir/map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/actions.c.dir/map.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/so_long/map.c -o CMakeFiles/actions.c.dir/map.c.s

CMakeFiles/actions.c.dir/map_checks.c.o: CMakeFiles/actions.c.dir/flags.make
CMakeFiles/actions.c.dir/map_checks.c.o: ../map_checks.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/actions.c.dir/map_checks.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/actions.c.dir/map_checks.c.o -c /Users/aheidy/so_long/map_checks.c

CMakeFiles/actions.c.dir/map_checks.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/actions.c.dir/map_checks.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/so_long/map_checks.c > CMakeFiles/actions.c.dir/map_checks.c.i

CMakeFiles/actions.c.dir/map_checks.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/actions.c.dir/map_checks.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/so_long/map_checks.c -o CMakeFiles/actions.c.dir/map_checks.c.s

CMakeFiles/actions.c.dir/map_checks2.c.o: CMakeFiles/actions.c.dir/flags.make
CMakeFiles/actions.c.dir/map_checks2.c.o: ../map_checks2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/actions.c.dir/map_checks2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/actions.c.dir/map_checks2.c.o -c /Users/aheidy/so_long/map_checks2.c

CMakeFiles/actions.c.dir/map_checks2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/actions.c.dir/map_checks2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aheidy/so_long/map_checks2.c > CMakeFiles/actions.c.dir/map_checks2.c.i

CMakeFiles/actions.c.dir/map_checks2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/actions.c.dir/map_checks2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aheidy/so_long/map_checks2.c -o CMakeFiles/actions.c.dir/map_checks2.c.s

# Object files for target actions.c
actions_c_OBJECTS = \
"CMakeFiles/actions.c.dir/actions_utils.c.o" \
"CMakeFiles/actions.c.dir/animation.c.o" \
"CMakeFiles/actions.c.dir/clean.c.o" \
"CMakeFiles/actions.c.dir/error.c.o" \
"CMakeFiles/actions.c.dir/game_end.c.o" \
"CMakeFiles/actions.c.dir/game_utils.c.o" \
"CMakeFiles/actions.c.dir/get_next_line.c.o" \
"CMakeFiles/actions.c.dir/image.c.o" \
"CMakeFiles/actions.c.dir/init.c.o" \
"CMakeFiles/actions.c.dir/libft.c.o" \
"CMakeFiles/actions.c.dir/map.c.o" \
"CMakeFiles/actions.c.dir/map_checks.c.o" \
"CMakeFiles/actions.c.dir/map_checks2.c.o"

# External object files for target actions.c
actions_c_EXTERNAL_OBJECTS =

actions.c: CMakeFiles/actions.c.dir/actions_utils.c.o
actions.c: CMakeFiles/actions.c.dir/animation.c.o
actions.c: CMakeFiles/actions.c.dir/clean.c.o
actions.c: CMakeFiles/actions.c.dir/error.c.o
actions.c: CMakeFiles/actions.c.dir/game_end.c.o
actions.c: CMakeFiles/actions.c.dir/game_utils.c.o
actions.c: CMakeFiles/actions.c.dir/get_next_line.c.o
actions.c: CMakeFiles/actions.c.dir/image.c.o
actions.c: CMakeFiles/actions.c.dir/init.c.o
actions.c: CMakeFiles/actions.c.dir/libft.c.o
actions.c: CMakeFiles/actions.c.dir/map.c.o
actions.c: CMakeFiles/actions.c.dir/map_checks.c.o
actions.c: CMakeFiles/actions.c.dir/map_checks2.c.o
actions.c: CMakeFiles/actions.c.dir/build.make
actions.c: CMakeFiles/actions.c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/aheidy/so_long/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking C executable actions.c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/actions.c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/actions.c.dir/build: actions.c
.PHONY : CMakeFiles/actions.c.dir/build

CMakeFiles/actions.c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/actions.c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/actions.c.dir/clean

CMakeFiles/actions.c.dir/depend:
	cd /Users/aheidy/so_long/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aheidy/so_long /Users/aheidy/so_long /Users/aheidy/so_long/cmake-build-debug /Users/aheidy/so_long/cmake-build-debug /Users/aheidy/so_long/cmake-build-debug/CMakeFiles/actions.c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/actions.c.dir/depend

