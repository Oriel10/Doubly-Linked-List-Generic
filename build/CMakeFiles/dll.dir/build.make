# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\user\Desktop\git projects\Doubly-Linked-List-Generic"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\user\Desktop\git projects\Doubly-Linked-List-Generic\build"

# Include any dependencies generated for this target.
include CMakeFiles/dll.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dll.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dll.dir/flags.make

CMakeFiles/dll.dir/main.cpp.obj: CMakeFiles/dll.dir/flags.make
CMakeFiles/dll.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\user\Desktop\git projects\Doubly-Linked-List-Generic\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dll.dir/main.cpp.obj"
	C:\TDM-GCC-64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dll.dir\main.cpp.obj -c "C:\Users\user\Desktop\git projects\Doubly-Linked-List-Generic\main.cpp"

CMakeFiles/dll.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dll.dir/main.cpp.i"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\user\Desktop\git projects\Doubly-Linked-List-Generic\main.cpp" > CMakeFiles\dll.dir\main.cpp.i

CMakeFiles/dll.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dll.dir/main.cpp.s"
	C:\TDM-GCC-64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\user\Desktop\git projects\Doubly-Linked-List-Generic\main.cpp" -o CMakeFiles\dll.dir\main.cpp.s

# Object files for target dll
dll_OBJECTS = \
"CMakeFiles/dll.dir/main.cpp.obj"

# External object files for target dll
dll_EXTERNAL_OBJECTS =

dll.exe: CMakeFiles/dll.dir/main.cpp.obj
dll.exe: CMakeFiles/dll.dir/build.make
dll.exe: CMakeFiles/dll.dir/linklibs.rsp
dll.exe: CMakeFiles/dll.dir/objects1.rsp
dll.exe: CMakeFiles/dll.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\user\Desktop\git projects\Doubly-Linked-List-Generic\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dll.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dll.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dll.dir/build: dll.exe

.PHONY : CMakeFiles/dll.dir/build

CMakeFiles/dll.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dll.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dll.dir/clean

CMakeFiles/dll.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\user\Desktop\git projects\Doubly-Linked-List-Generic" "C:\Users\user\Desktop\git projects\Doubly-Linked-List-Generic" "C:\Users\user\Desktop\git projects\Doubly-Linked-List-Generic\build" "C:\Users\user\Desktop\git projects\Doubly-Linked-List-Generic\build" "C:\Users\user\Desktop\git projects\Doubly-Linked-List-Generic\build\CMakeFiles\dll.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/dll.dir/depend

