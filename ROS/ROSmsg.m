%% ROS initialize
rosinit
%% Make rosmsgs handle
pointMsg=rosmessage('geometry_msgs/Point');
%% Change property by using the created pointMsg handle
pointMsg.Y=2;
%% 
ipaddress='172.30.1.13';
rosinit(ipaddress)