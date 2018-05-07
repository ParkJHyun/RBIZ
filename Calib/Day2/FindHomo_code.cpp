#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>

#ifdef _DEBUG
#pragma comment(lib, "opencv_world341d.lib")
#else
#pragma comment(lib, "opencv_world341.lib")
#endif

using namespace cv;
using namespace std;

int main() {

    // Four points from World.
    vector<Point2f> pts_src;
    pts_src.push_back(Point2f(12, 71));
    pts_src.push_back(Point2f(12, 51));
    pts_src.push_back(Point2f(12, 46));
    pts_src.push_back(Point2f(12, 19));
 
    // Four points from Image
    vector<Point2f> pts_dst;
    pts_dst.push_back(Point2f(1161, 1451));
    pts_dst.push_back(Point2f(973, 1595));
    pts_dst.push_back(Point2f(885, 1664));
    pts_dst.push_back(Point2f(485, 1982));
 
    // Calculate Homography
    Mat h = findHomography(pts_src, pts_dst);
 
	
    cout << h << endl;
 
    waitKey(0);
	return 0;
}
