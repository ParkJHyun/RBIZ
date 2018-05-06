while 1
    img=snapshot(webcam);
    img1=rgb2gray(img);
     Mask=edge(img1,'sobel');
    imshow(Mask);
    
end
