# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/129/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/129/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mikolaj/C/final

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mikolaj/C/final

# Include any dependencies generated for this target.
include CMakeFiles/Niekonczace_sie_skakanie.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Niekonczace_sie_skakanie.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Niekonczace_sie_skakanie.dir/flags.make

CMakeFiles/Niekonczace_sie_skakanie.dir/Main.c.o: CMakeFiles/Niekonczace_sie_skakanie.dir/flags.make
CMakeFiles/Niekonczace_sie_skakanie.dir/Main.c.o: Main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mikolaj/C/final/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Niekonczace_sie_skakanie.dir/Main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Niekonczace_sie_skakanie.dir/Main.c.o   -c /home/mikolaj/C/final/Main.c

CMakeFiles/Niekonczace_sie_skakanie.dir/Main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Niekonczace_sie_skakanie.dir/Main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mikolaj/C/final/Main.c > CMakeFiles/Niekonczace_sie_skakanie.dir/Main.c.i

CMakeFiles/Niekonczace_sie_skakanie.dir/Main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Niekonczace_sie_skakanie.dir/Main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mikolaj/C/final/Main.c -o CMakeFiles/Niekonczace_sie_skakanie.dir/Main.c.s

CMakeFiles/Niekonczace_sie_skakanie.dir/code/kernel/Engine.c.o: CMakeFiles/Niekonczace_sie_skakanie.dir/flags.make
CMakeFiles/Niekonczace_sie_skakanie.dir/code/kernel/Engine.c.o: code/kernel/Engine.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mikolaj/C/final/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Niekonczace_sie_skakanie.dir/code/kernel/Engine.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Niekonczace_sie_skakanie.dir/code/kernel/Engine.c.o   -c /home/mikolaj/C/final/code/kernel/Engine.c

CMakeFiles/Niekonczace_sie_skakanie.dir/code/kernel/Engine.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Niekonczace_sie_skakanie.dir/code/kernel/Engine.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mikolaj/C/final/code/kernel/Engine.c > CMakeFiles/Niekonczace_sie_skakanie.dir/code/kernel/Engine.c.i

CMakeFiles/Niekonczace_sie_skakanie.dir/code/kernel/Engine.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Niekonczace_sie_skakanie.dir/code/kernel/Engine.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mikolaj/C/final/code/kernel/Engine.c -o CMakeFiles/Niekonczace_sie_skakanie.dir/code/kernel/Engine.c.s

CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/RenderingLayers.c.o: CMakeFiles/Niekonczace_sie_skakanie.dir/flags.make
CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/RenderingLayers.c.o: code/rendering/RenderingLayers.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mikolaj/C/final/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/RenderingLayers.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/RenderingLayers.c.o   -c /home/mikolaj/C/final/code/rendering/RenderingLayers.c

CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/RenderingLayers.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/RenderingLayers.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mikolaj/C/final/code/rendering/RenderingLayers.c > CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/RenderingLayers.c.i

CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/RenderingLayers.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/RenderingLayers.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mikolaj/C/final/code/rendering/RenderingLayers.c -o CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/RenderingLayers.c.s

CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/Tekstury.c.o: CMakeFiles/Niekonczace_sie_skakanie.dir/flags.make
CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/Tekstury.c.o: code/rendering/Tekstury.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mikolaj/C/final/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/Tekstury.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/Tekstury.c.o   -c /home/mikolaj/C/final/code/rendering/Tekstury.c

CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/Tekstury.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/Tekstury.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mikolaj/C/final/code/rendering/Tekstury.c > CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/Tekstury.c.i

CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/Tekstury.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/Tekstury.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mikolaj/C/final/code/rendering/Tekstury.c -o CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/Tekstury.c.s

CMakeFiles/Niekonczace_sie_skakanie.dir/code/sterowanie/KontrolaGracza.c.o: CMakeFiles/Niekonczace_sie_skakanie.dir/flags.make
CMakeFiles/Niekonczace_sie_skakanie.dir/code/sterowanie/KontrolaGracza.c.o: code/sterowanie/KontrolaGracza.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mikolaj/C/final/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Niekonczace_sie_skakanie.dir/code/sterowanie/KontrolaGracza.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Niekonczace_sie_skakanie.dir/code/sterowanie/KontrolaGracza.c.o   -c /home/mikolaj/C/final/code/sterowanie/KontrolaGracza.c

CMakeFiles/Niekonczace_sie_skakanie.dir/code/sterowanie/KontrolaGracza.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Niekonczace_sie_skakanie.dir/code/sterowanie/KontrolaGracza.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mikolaj/C/final/code/sterowanie/KontrolaGracza.c > CMakeFiles/Niekonczace_sie_skakanie.dir/code/sterowanie/KontrolaGracza.c.i

CMakeFiles/Niekonczace_sie_skakanie.dir/code/sterowanie/KontrolaGracza.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Niekonczace_sie_skakanie.dir/code/sterowanie/KontrolaGracza.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mikolaj/C/final/code/sterowanie/KontrolaGracza.c -o CMakeFiles/Niekonczace_sie_skakanie.dir/code/sterowanie/KontrolaGracza.c.s

# Object files for target Niekonczace_sie_skakanie
Niekonczace_sie_skakanie_OBJECTS = \
"CMakeFiles/Niekonczace_sie_skakanie.dir/Main.c.o" \
"CMakeFiles/Niekonczace_sie_skakanie.dir/code/kernel/Engine.c.o" \
"CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/RenderingLayers.c.o" \
"CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/Tekstury.c.o" \
"CMakeFiles/Niekonczace_sie_skakanie.dir/code/sterowanie/KontrolaGracza.c.o"

# External object files for target Niekonczace_sie_skakanie
Niekonczace_sie_skakanie_EXTERNAL_OBJECTS =

Niekonczace_sie_skakanie: CMakeFiles/Niekonczace_sie_skakanie.dir/Main.c.o
Niekonczace_sie_skakanie: CMakeFiles/Niekonczace_sie_skakanie.dir/code/kernel/Engine.c.o
Niekonczace_sie_skakanie: CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/RenderingLayers.c.o
Niekonczace_sie_skakanie: CMakeFiles/Niekonczace_sie_skakanie.dir/code/rendering/Tekstury.c.o
Niekonczace_sie_skakanie: CMakeFiles/Niekonczace_sie_skakanie.dir/code/sterowanie/KontrolaGracza.c.o
Niekonczace_sie_skakanie: CMakeFiles/Niekonczace_sie_skakanie.dir/build.make
Niekonczace_sie_skakanie: /usr/lib/x86_64-linux-gnu/libSDL2.so
Niekonczace_sie_skakanie: /usr/lib/x86_64-linux-gnu/libSDL2main.a
Niekonczace_sie_skakanie: /usr/lib/x86_64-linux-gnu/libSDL2_image.so
Niekonczace_sie_skakanie: CMakeFiles/Niekonczace_sie_skakanie.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mikolaj/C/final/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable Niekonczace_sie_skakanie"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Niekonczace_sie_skakanie.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Niekonczace_sie_skakanie.dir/build: Niekonczace_sie_skakanie

.PHONY : CMakeFiles/Niekonczace_sie_skakanie.dir/build

CMakeFiles/Niekonczace_sie_skakanie.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Niekonczace_sie_skakanie.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Niekonczace_sie_skakanie.dir/clean

CMakeFiles/Niekonczace_sie_skakanie.dir/depend:
	cd /home/mikolaj/C/final && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mikolaj/C/final /home/mikolaj/C/final /home/mikolaj/C/final /home/mikolaj/C/final /home/mikolaj/C/final/CMakeFiles/Niekonczace_sie_skakanie.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Niekonczace_sie_skakanie.dir/depend
