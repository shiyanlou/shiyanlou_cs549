cd ~/catkin_ws/src

catkin_create_pkg beginner_tutorials std_msgs rospy roscpp 

rospack depends1 beginner_tutorials

roscd beginner_tutorials  
cat package.xml  

rospack depends1 rospy 

rospack depends beginner_tutorials

rospack list
