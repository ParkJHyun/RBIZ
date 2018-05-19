rosinit('localhost')
rosinit('master_host')
%% register ROS
rosinit('172.30.1.56', 'NodeHost', '172.30.1.56')
rosinit('http://172.30.1.13:11311', 'NodeHost', '192.168.99.100')
rosinit('master_host', 'NodeHost', '192.168.99.100')