# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shawn/Projects/qt_practicum/kcm_ufw

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shawn/Projects/qt_practicum/kcm_ufw

# Utility rule file for actions for org.kde.ufw.

# Include the progress variables for this target.
include helper/CMakeFiles/actions\ for\ org.kde.ufw.dir/progress.make

helper/CMakeFiles/actions\ for\ org.kde.ufw: helper/org.kde.ufw.policy

helper/org.kde.ufw.policy: /usr/lib/x86_64-linux-gnu/libexec/kauth/kauth-policy-gen
helper/org.kde.ufw.policy: helper/ufw.actions
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shawn/Projects/qt_practicum/kcm_ufw/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating org.kde.ufw.policy"
	cd /home/shawn/Projects/qt_practicum/kcm_ufw/helper && /usr/lib/x86_64-linux-gnu/libexec/kauth/kauth-policy-gen /home/shawn/Projects/qt_practicum/kcm_ufw/helper/ufw.actions /home/shawn/Projects/qt_practicum/kcm_ufw/helper/org.kde.ufw.policy

actions\ for\ org.kde.ufw: helper/CMakeFiles/actions\ for\ org.kde.ufw
actions\ for\ org.kde.ufw: helper/org.kde.ufw.policy
actions\ for\ org.kde.ufw: helper/CMakeFiles/actions\ for\ org.kde.ufw.dir/build.make
.PHONY : actions\ for\ org.kde.ufw

# Rule to build all files generated by this target.
helper/CMakeFiles/actions\ for\ org.kde.ufw.dir/build: actions\ for\ org.kde.ufw
.PHONY : helper/CMakeFiles/actions\ for\ org.kde.ufw.dir/build

helper/CMakeFiles/actions\ for\ org.kde.ufw.dir/clean:
	cd /home/shawn/Projects/qt_practicum/kcm_ufw/helper && $(CMAKE_COMMAND) -P "CMakeFiles/actions for org.kde.ufw.dir/cmake_clean.cmake"
.PHONY : helper/CMakeFiles/actions\ for\ org.kde.ufw.dir/clean

helper/CMakeFiles/actions\ for\ org.kde.ufw.dir/depend:
	cd /home/shawn/Projects/qt_practicum/kcm_ufw && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shawn/Projects/qt_practicum/kcm_ufw /home/shawn/Projects/qt_practicum/kcm_ufw/helper /home/shawn/Projects/qt_practicum/kcm_ufw /home/shawn/Projects/qt_practicum/kcm_ufw/helper "/home/shawn/Projects/qt_practicum/kcm_ufw/helper/CMakeFiles/actions for org.kde.ufw.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : helper/CMakeFiles/actions\ for\ org.kde.ufw.dir/depend

