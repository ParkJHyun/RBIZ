%% Image Acquisition from video
vidobj = imaq.VideoDevice('winvideo',1);
vidobj.ReturnedColorSpace = 'grayscale';
%% Edge detecting from Video and show
while 1
frame = step(vidobj);
Edge=edge(frame,'sobel',0.078);
imshow(Edge);
end
%% Release VideoDevice
release(vidobj);
clear vidobj;