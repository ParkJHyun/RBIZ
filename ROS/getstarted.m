%% ROS getting started with MATLAB
%%Initialize rosnetwork and roscore
rosinit
%% operating Sample ROSnetwork
exampleHelperROSCreateSampleNetwork
%% show operationg ros node list
rosnode list
%% show operationg topic list
rostopic list
%% show information of /pose topic
rostopic info /pose
%% show ros service list
rosservice list
%% show ros service information
rosservice info /add
rosservice info /reply
%% show message type about /pose topic
rostopic type /pose
%% show what properties about messages
rosmsg show geometry_msgs/Twist
%% show messages list
rosmsg list
%% shutdown ros
rosshutdown