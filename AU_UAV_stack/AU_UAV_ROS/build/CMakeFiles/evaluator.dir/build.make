# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/2.8.8/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/2.8.8/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/local/Cellar/cmake/2.8.8/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS/build

# Include any dependencies generated for this target.
include CMakeFiles/evaluator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/evaluator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/evaluator.dir/flags.make

CMakeFiles/evaluator.dir/src/evaluator.o: CMakeFiles/evaluator.dir/flags.make
CMakeFiles/evaluator.dir/src/evaluator.o: ../src/evaluator.cpp
CMakeFiles/evaluator.dir/src/evaluator.o: ../manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros/tools/rospack/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros/core/roslib/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/messages/std_msgs/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros/core/rosbuild/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros/core/roslang/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/utilities/cpp_common/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/clients/cpp/roscpp_traits/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/utilities/rostime/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/clients/cpp/roscpp_serialization/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/utilities/xmlrpcpp/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/tools/rosconsole/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/messages/rosgraph_msgs/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/clients/cpp/roscpp/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/clients/rospy/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros/tools/rosclean/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/tools/rosgraph/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/tools/rosparam/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/tools/rosmaster/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/tools/rosout/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/tools/roslaunch/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros/tools/rosunit/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/tools/rostest/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/tools/topic_tools/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/tools/rosbag/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/tools/rosbagmigration/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/common_msgs/geometry_msgs/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/common_msgs/visualization_msgs/manifest.xml
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/messages/std_msgs/msg_gen/generated
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/messages/rosgraph_msgs/msg_gen/generated
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/clients/cpp/roscpp/msg_gen/generated
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/clients/cpp/roscpp/srv_gen/generated
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/ros_comm/tools/topic_tools/srv_gen/generated
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/common_msgs/geometry_msgs/msg_gen/generated
CMakeFiles/evaluator.dir/src/evaluator.o: /Users/Ryan/ros/common_msgs/visualization_msgs/msg_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/evaluator.dir/src/evaluator.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/evaluator.dir/src/evaluator.o -c /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS/src/evaluator.cpp

CMakeFiles/evaluator.dir/src/evaluator.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/evaluator.dir/src/evaluator.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS/src/evaluator.cpp > CMakeFiles/evaluator.dir/src/evaluator.i

CMakeFiles/evaluator.dir/src/evaluator.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/evaluator.dir/src/evaluator.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS/src/evaluator.cpp -o CMakeFiles/evaluator.dir/src/evaluator.s

CMakeFiles/evaluator.dir/src/evaluator.o.requires:
.PHONY : CMakeFiles/evaluator.dir/src/evaluator.o.requires

CMakeFiles/evaluator.dir/src/evaluator.o.provides: CMakeFiles/evaluator.dir/src/evaluator.o.requires
	$(MAKE) -f CMakeFiles/evaluator.dir/build.make CMakeFiles/evaluator.dir/src/evaluator.o.provides.build
.PHONY : CMakeFiles/evaluator.dir/src/evaluator.o.provides

CMakeFiles/evaluator.dir/src/evaluator.o.provides.build: CMakeFiles/evaluator.dir/src/evaluator.o

CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: CMakeFiles/evaluator.dir/flags.make
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: ../src/AU_UAV_ROS/standardDefs.cpp
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: ../manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros/tools/rospack/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros/core/roslib/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/messages/std_msgs/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros/core/rosbuild/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros/core/roslang/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/utilities/cpp_common/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/clients/cpp/roscpp_traits/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/utilities/rostime/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/clients/cpp/roscpp_serialization/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/utilities/xmlrpcpp/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/tools/rosconsole/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/messages/rosgraph_msgs/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/clients/cpp/roscpp/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/clients/rospy/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros/tools/rosclean/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/tools/rosgraph/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/tools/rosparam/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/tools/rosmaster/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/tools/rosout/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/tools/roslaunch/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros/tools/rosunit/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/tools/rostest/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/tools/topic_tools/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/tools/rosbag/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/tools/rosbagmigration/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/common_msgs/geometry_msgs/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/common_msgs/visualization_msgs/manifest.xml
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/messages/std_msgs/msg_gen/generated
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/messages/rosgraph_msgs/msg_gen/generated
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/clients/cpp/roscpp/msg_gen/generated
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/clients/cpp/roscpp/srv_gen/generated
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/ros_comm/tools/topic_tools/srv_gen/generated
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/common_msgs/geometry_msgs/msg_gen/generated
CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o: /Users/Ryan/ros/common_msgs/visualization_msgs/msg_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o -c /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS/src/AU_UAV_ROS/standardDefs.cpp

CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS/src/AU_UAV_ROS/standardDefs.cpp > CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.i

CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS/src/AU_UAV_ROS/standardDefs.cpp -o CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.s

CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o.requires:
.PHONY : CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o.requires

CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o.provides: CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o.requires
	$(MAKE) -f CMakeFiles/evaluator.dir/build.make CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o.provides.build
.PHONY : CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o.provides

CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o.provides.build: CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o

# Object files for target evaluator
evaluator_OBJECTS = \
"CMakeFiles/evaluator.dir/src/evaluator.o" \
"CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o"

# External object files for target evaluator
evaluator_EXTERNAL_OBJECTS =

../bin/evaluator: CMakeFiles/evaluator.dir/src/evaluator.o
../bin/evaluator: CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o
../bin/evaluator: CMakeFiles/evaluator.dir/build.make
../bin/evaluator: CMakeFiles/evaluator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/evaluator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/evaluator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/evaluator.dir/build: ../bin/evaluator
.PHONY : CMakeFiles/evaluator.dir/build

CMakeFiles/evaluator.dir/requires: CMakeFiles/evaluator.dir/src/evaluator.o.requires
CMakeFiles/evaluator.dir/requires: CMakeFiles/evaluator.dir/src/AU_UAV_ROS/standardDefs.o.requires
.PHONY : CMakeFiles/evaluator.dir/requires

CMakeFiles/evaluator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/evaluator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/evaluator.dir/clean

CMakeFiles/evaluator.dir/depend:
	cd /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS/build /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS/build /Users/Ryan/Dropbox/UAV/AU-UAV-ROS/AU_UAV_stack/AU_UAV_ROS/build/CMakeFiles/evaluator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/evaluator.dir/depend

