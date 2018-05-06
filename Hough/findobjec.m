x=0:.1:10;
plot(x,sin(x).*exp(-.5*x));
xlabel('x'); ylabel('y');
text(4,.3,'y=sin(x).*exp(-.5x)');
text(5,-0.1,'Here''s the maximum');
%% Get findobj
line_handle=findobj('type','line');
set(line_handle,'linestyle','--');
text_handle=findobj('string','Here''s the maximum');
set(text_handle,'string','Change maximum');
