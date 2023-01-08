% Modify 'result_img.txt' for convert to image
S = readlines('result_img.txt');
S{2} = regexprep(S{2}, 'x', '0');    %Change "x" to "0"
[fid, msg] = fopen('result_img.txt', 'w');
fwrite(fid, strjoin(S, '\n'));
fclose(fid);

% script to convert text file to image
fileID = fopen('result_img.txt', 'r');
A = fscanf(fileID, '%d');
B = reshape(A,638,[]);
C = transpose(B);
D = mat2gray(C);
imwrite(D,'result_img.jpg');
imshow('result_img.jpg');