rosdep update

source /opt/ros/indigo/setup.bash

export | grep ROS

mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/src

cd ~/catkin_ws/ 
catkin_make

source devel/setup.bash
