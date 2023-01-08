% script to convert image to text file
filename = 'test0.jpg';
imshow(filename);
A = imread(filename);
B = im2gray(A);
C = imgaussfilt(B);
dlmwrite('data.txt',C,'delimiter',' ');