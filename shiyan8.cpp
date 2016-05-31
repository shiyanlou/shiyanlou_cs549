roscore

rosrun turtlesim turtlesim_node

rosrun turtlesim turtle_teleop_key

sudo apt-get install ros-hydro-rqt 
sudo apt-get install ros-hydro-rqt-common-plugins  

rosrun rqt_graph rqt_graph

rostopic echo /turtle1/cmd_vel 

rosrun rqt_graph rqt_graph

rostopic list

rostopic list -v

rostopic type /turtle1/cmd_vel 

rosmsg show geometry_msgs/Twist 

rostopic pub -1 /turtle1/cmd_vel geometry_msgs/Twist -- '[2.0, 0.0, 0.0]' '[0.0, 0.0, 1.8]' 

rostopic pub

rostopic pub /turtle1/cmd_vel geometry_msgs/Twist -r 1 -- '[2.0, 0.0, 0.0]' '[0.0, 0.0, 1.8]'  


