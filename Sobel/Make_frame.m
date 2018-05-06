%% Image Acquisition from video
vidobj = imaq.VideoDevice('winvideo',1);
vidobj.ReturnedColorSpace = 'grayscale';
%% View figure
preview(vidobj)
frame = step(vidobj);
imshow(frame)
%% Release VideoDevice
release(vidobj);
clear vidobj;