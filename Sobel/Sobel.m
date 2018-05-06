vidobj = imaq.VideoDevice('winvideo',1);
vidobj.ReturnedColorSpace = 'grayscale';
%% Find Edge and line through Sobel, Hough
frame=step(vidobj);
level = graythresh(frame);
W = imbinarize(frame,level);
imshow(W)
[H, T, R]=hough(W);
%% Release VideoDevice
release(vidobj);
clear vidobj;