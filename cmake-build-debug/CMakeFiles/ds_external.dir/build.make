# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Pratik\CLionProjects\ds_external

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Pratik\CLionProjects\ds_external\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ds_external.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ds_external.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ds_external.dir/flags.make

CMakeFiles/ds_external.dir/main.c.obj: CMakeFiles/ds_external.dir/flags.make
CMakeFiles/ds_external.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Pratik\CLionProjects\ds_external\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ds_external.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ds_external.dir\main.c.obj   -c C:\Users\Pratik\CLionProjects\ds_external\main.c

CMakeFiles/ds_external.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ds_external.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Pratik\CLionProjects\ds_external\main.c > CMakeFiles\ds_external.dir\main.c.i

CMakeFiles/ds_external.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ds_external.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Pratik\CLionProjects\ds_external\main.c -o CMakeFiles\ds_external.dir\main.c.s

# Object files for target ds_external
ds_external_OBJECTS = \
"CMakeFiles/ds_external.dir/main.c.obj"

# External object files for target ds_external
ds_external_EXTERNAL_OBJECTS =

ds_external.exe: CMakeFiles/ds_external.dir/main.c.obj
ds_external.exe: CMakeFiles/ds_external.dir/build.make
ds_external.exe: CMakeFiles/ds_external.dir/linklibs.rsp
ds_external.exe: CMakeFiles/ds_external.dir/objects1.rsp
ds_external.exe: CMakeFiles/ds_external.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Pratik\CLionProjects\ds_external\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ds_external.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ds_external.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ds_external.dir/build: ds_external.exe

.PHONY : CMakeFiles/ds_external.dir/build

CMakeFiles/ds_external.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ds_external.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ds_external.dir/clean

CMakeFiles/ds_external.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Pratik\CLionProjects\ds_external C:\Users\Pratik\CLionProjects\ds_external C:\Users\Pratik\CLionProjects\ds_external\cmake-build-debug C:\Users\Pratik\CLionProjects\ds_external\cmake-build-debug C:\Users\Pratik\CLionProjects\ds_external\cmake-build-debug\CMakeFiles\ds_external.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ds_external.dir/depend
