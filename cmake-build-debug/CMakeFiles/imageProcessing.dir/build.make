# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ellab\Documents\Computing\cproj\imageProcessing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ellab\Documents\Computing\cproj\imageProcessing\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/imageProcessing.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/imageProcessing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/imageProcessing.dir/flags.make

CMakeFiles/imageProcessing.dir/src/main.c.obj: CMakeFiles/imageProcessing.dir/flags.make
CMakeFiles/imageProcessing.dir/src/main.c.obj: ../src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ellab\Documents\Computing\cproj\imageProcessing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/imageProcessing.dir/src/main.c.obj"
	C:\PROGRA~1\HASKEL~1\847A5C~1.3\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\imageProcessing.dir\src\main.c.obj   -c C:\Users\ellab\Documents\Computing\cproj\imageProcessing\src\main.c

CMakeFiles/imageProcessing.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/imageProcessing.dir/src/main.c.i"
	C:\PROGRA~1\HASKEL~1\847A5C~1.3\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\ellab\Documents\Computing\cproj\imageProcessing\src\main.c > CMakeFiles\imageProcessing.dir\src\main.c.i

CMakeFiles/imageProcessing.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/imageProcessing.dir/src/main.c.s"
	C:\PROGRA~1\HASKEL~1\847A5C~1.3\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\ellab\Documents\Computing\cproj\imageProcessing\src\main.c -o CMakeFiles\imageProcessing.dir\src\main.c.s

CMakeFiles/imageProcessing.dir/src/masks.c.obj: CMakeFiles/imageProcessing.dir/flags.make
CMakeFiles/imageProcessing.dir/src/masks.c.obj: ../src/masks.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ellab\Documents\Computing\cproj\imageProcessing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/imageProcessing.dir/src/masks.c.obj"
	C:\PROGRA~1\HASKEL~1\847A5C~1.3\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\imageProcessing.dir\src\masks.c.obj   -c C:\Users\ellab\Documents\Computing\cproj\imageProcessing\src\masks.c

CMakeFiles/imageProcessing.dir/src/masks.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/imageProcessing.dir/src/masks.c.i"
	C:\PROGRA~1\HASKEL~1\847A5C~1.3\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\ellab\Documents\Computing\cproj\imageProcessing\src\masks.c > CMakeFiles\imageProcessing.dir\src\masks.c.i

CMakeFiles/imageProcessing.dir/src/masks.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/imageProcessing.dir/src/masks.c.s"
	C:\PROGRA~1\HASKEL~1\847A5C~1.3\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\ellab\Documents\Computing\cproj\imageProcessing\src\masks.c -o CMakeFiles\imageProcessing.dir\src\masks.c.s

CMakeFiles/imageProcessing.dir/src/utils.c.obj: CMakeFiles/imageProcessing.dir/flags.make
CMakeFiles/imageProcessing.dir/src/utils.c.obj: ../src/utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ellab\Documents\Computing\cproj\imageProcessing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/imageProcessing.dir/src/utils.c.obj"
	C:\PROGRA~1\HASKEL~1\847A5C~1.3\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\imageProcessing.dir\src\utils.c.obj   -c C:\Users\ellab\Documents\Computing\cproj\imageProcessing\src\utils.c

CMakeFiles/imageProcessing.dir/src/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/imageProcessing.dir/src/utils.c.i"
	C:\PROGRA~1\HASKEL~1\847A5C~1.3\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\ellab\Documents\Computing\cproj\imageProcessing\src\utils.c > CMakeFiles\imageProcessing.dir\src\utils.c.i

CMakeFiles/imageProcessing.dir/src/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/imageProcessing.dir/src/utils.c.s"
	C:\PROGRA~1\HASKEL~1\847A5C~1.3\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\ellab\Documents\Computing\cproj\imageProcessing\src\utils.c -o CMakeFiles\imageProcessing.dir\src\utils.c.s

CMakeFiles/imageProcessing.dir/src/edgeDetection.c.obj: CMakeFiles/imageProcessing.dir/flags.make
CMakeFiles/imageProcessing.dir/src/edgeDetection.c.obj: ../src/edgeDetection.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ellab\Documents\Computing\cproj\imageProcessing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/imageProcessing.dir/src/edgeDetection.c.obj"
	C:\PROGRA~1\HASKEL~1\847A5C~1.3\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\imageProcessing.dir\src\edgeDetection.c.obj   -c C:\Users\ellab\Documents\Computing\cproj\imageProcessing\src\edgeDetection.c

CMakeFiles/imageProcessing.dir/src/edgeDetection.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/imageProcessing.dir/src/edgeDetection.c.i"
	C:\PROGRA~1\HASKEL~1\847A5C~1.3\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\ellab\Documents\Computing\cproj\imageProcessing\src\edgeDetection.c > CMakeFiles\imageProcessing.dir\src\edgeDetection.c.i

CMakeFiles/imageProcessing.dir/src/edgeDetection.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/imageProcessing.dir/src/edgeDetection.c.s"
	C:\PROGRA~1\HASKEL~1\847A5C~1.3\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\ellab\Documents\Computing\cproj\imageProcessing\src\edgeDetection.c -o CMakeFiles\imageProcessing.dir\src\edgeDetection.c.s

# Object files for target imageProcessing
imageProcessing_OBJECTS = \
"CMakeFiles/imageProcessing.dir/src/main.c.obj" \
"CMakeFiles/imageProcessing.dir/src/masks.c.obj" \
"CMakeFiles/imageProcessing.dir/src/utils.c.obj" \
"CMakeFiles/imageProcessing.dir/src/edgeDetection.c.obj"

# External object files for target imageProcessing
imageProcessing_EXTERNAL_OBJECTS =

imageProcessing.exe: CMakeFiles/imageProcessing.dir/src/main.c.obj
imageProcessing.exe: CMakeFiles/imageProcessing.dir/src/masks.c.obj
imageProcessing.exe: CMakeFiles/imageProcessing.dir/src/utils.c.obj
imageProcessing.exe: CMakeFiles/imageProcessing.dir/src/edgeDetection.c.obj
imageProcessing.exe: CMakeFiles/imageProcessing.dir/build.make
imageProcessing.exe: CMakeFiles/imageProcessing.dir/linklibs.rsp
imageProcessing.exe: CMakeFiles/imageProcessing.dir/objects1.rsp
imageProcessing.exe: CMakeFiles/imageProcessing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ellab\Documents\Computing\cproj\imageProcessing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable imageProcessing.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\imageProcessing.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/imageProcessing.dir/build: imageProcessing.exe

.PHONY : CMakeFiles/imageProcessing.dir/build

CMakeFiles/imageProcessing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\imageProcessing.dir\cmake_clean.cmake
.PHONY : CMakeFiles/imageProcessing.dir/clean

CMakeFiles/imageProcessing.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ellab\Documents\Computing\cproj\imageProcessing C:\Users\ellab\Documents\Computing\cproj\imageProcessing C:\Users\ellab\Documents\Computing\cproj\imageProcessing\cmake-build-debug C:\Users\ellab\Documents\Computing\cproj\imageProcessing\cmake-build-debug C:\Users\ellab\Documents\Computing\cproj\imageProcessing\cmake-build-debug\CMakeFiles\imageProcessing.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/imageProcessing.dir/depend

