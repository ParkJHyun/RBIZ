%% Clear
clc
%% Load Image and Convert Gray pixel
I=imread('road.jpeg');
frame=rgb2gray(I);
level = graythresh(I);
%% Find Edge and line through Sobel, Hough
BW=edge(frame,'sobel');
[H, T, R]=hough(BW);
imshow(BW);
%% Find Hough Peaks that mean Line
P  = houghpeaks(H,3,'threshold',ceil(0.3*max(H(:))));
x = T(P(:,2)); y = R(P(:,1));
%% Show line
lines = houghlines(BW,T,R,P,'FillGap',5,'MinLength',7); 
MT=[1, 0; 0, -1];
CP=[-250, 180; -250, 180];
figure, hold on
 h=findobj(gca, 'Type','line');
for k = 1:length(lines)
   xy = [lines(k).point1; lines(k).point2];
   xy=xy*MT+CP;
   plot(xy(:,1),xy(:,2),'LineWidth',2,'Color','green');
    plot(xy(1,1),xy(1,2),'x','LineWidth',2,'Color','yellow');
   plot(xy(2,1),xy(2,2),'x','LineWidth',2,'Color','red');
end
