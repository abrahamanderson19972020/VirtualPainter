#include <iostream>
#include <opencv2/imgcodecs.hpp> //is used for reading and writing various image formats.
#include <opencv2/highgui.hpp> // is used for creating windows, displaying images, capturing input from keyboard, mouse
#include <opencv2/imgproc.hpp> // is used for filtering, transformations, morpoholigical operations
using namespace cv;
using namespace std;


void main() {
	std::string path = "./Resources/test.png";
	Mat img = imread(path);
	imshow("Original Image", img);
	waitKey(0);
}