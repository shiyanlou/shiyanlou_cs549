sudo apt-get install ros-hydro-rqt ros-hydro-rqt-common-plugins ros-hydro-turtlesim

rosrun rqt_console rqt_console

rosrun rqt_logger_level rqt_logger_l

rosrun turtlesim turtlesim_node

rostopic pub /turtle1/cmd_vel geometry_msgs/Twist -r 1 -- '[2.0, 0.0, 0.0]' '[0.0, 0.0, 0.0]'

roscd beginner_tutorials

mkdir launch
cd launch

gedit turtlemimic.launch

roslaunch beginner_tutorials turtlemimic.launch

rostopic pub /turtlesim1/turtle1/cmd_vel geometry_msgs/Twist -r 1 -- '[2.0, 0.0, 0.0]' '[0.0, 0.0, -1.8]'

