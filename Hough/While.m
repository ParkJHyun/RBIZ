%% Clear
clc
%% Image Acquisition from video
vidobj = imaq.VideoDevice('winvideo',1);
vidobj.ReturnedColorSpace = 'grayscale';
%% Find Edge and line through Sobel, Hough
while 1
frame=step(vidobj);
BW=edge(frame,'sobel');
[H, T, R]=hough(BW);
%% Find Hough Peaks that mean Line
P  = houghpeaks(H,3,'threshold',ceil(0.3*max(H(:))));
x = T(P(:,2)); y = R(P(:,1));
%% Show line
lines = houghlines(BW,T,R,P,'FillGap',5,'MinLength',7);
MT=[1, 0; 0, -1];
for k = 1:length(lines)
   xy = [lines(k).point1; lines(k).point2];
   xy=MT*xy;
   plot(xy(:,1),xy(:,2),'LineWidth',2,'Color','green');
   plot(xy(1,1),xy(1,2),'x','LineWidth',2,'Color','yellow');
   plot(xy(2,1),xy(2,2),'x','LineWidth',2,'Color','red');
end
end
%% Release VideoDevice
release(vidobj);
clear vidobj;