%% Clear
clc
%% Image Acquisition from video
vidobj = imaq.VideoDevice('winvideo',1);
vidobj.ReturnedColorSpace = 'grayscale';
%% Find Edge and line through Sobel, Hough
while 1
frame=step(vidobj);
BW=edge(frame,'canny');
[H, T, R]=hough(BW);
%% Find Hough Peaks that mean Line
P  = houghpeaks(H,3,'threshold',ceil(0.3*max(H(:))));
x = T(P(:,2)); y = R(P(:,1));
%% Show line
lines = houghlines(BW,T,R,P,'FillGap',5,'MinLength',7);
figure, imshow(BW), hold on;
for k = 1:length(lines)
   xy = [lines(k).point1; lines(k).point2];
   plot(xy(:,1),xy(:,2),'LineWidth',2,'Color','green');
end
end
%% Release VideoDevice
release(vidobj);
clear vidobj;