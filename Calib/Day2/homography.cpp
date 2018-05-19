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


int main()

{



	vector<Point2f> pts_src;

	pts_src.push_back(Point2f(697, 1293));
	pts_src.push_back(Point2f(819, 1294));
	pts_src.push_back(Point2f(993, 1296));
	pts_src.push_back(Point2f(1184, 1293));
	pts_src.push_back(Point2f(1377, 1284));
	pts_src.push_back(Point2f(1574, 1270));
	pts_src.push_back(Point2f(1754, 1254));
	pts_src.push_back(Point2f(1882, 1239));
	pts_src.push_back(Point2f(634, 1405));
	pts_src.push_back(Point2f(767, 1412));
	pts_src.push_back(Point2f(958, 1418));
	pts_src.push_back(Point2f(1172, 1416));
	pts_src.push_back(Point2f(1393, 1409));
	pts_src.push_back(Point2f(1612, 1388));
	pts_src.push_back(Point2f(1810, 1369));
	pts_src.push_back(Point2f(1953, 1350));
	pts_src.push_back(Point2f(553, 1537));
	pts_src.push_back(Point2f(704, 1555));
	pts_src.push_back(Point2f(914, 1573));
	pts_src.push_back(Point2f(1961, 1576));
	pts_src.push_back(Point2f(1410, 1567));
	pts_src.push_back(Point2f(1663, 1542));
	pts_src.push_back(Point2f(1886, 1507));
	pts_src.push_back(Point2f(2041,1471));
	pts_src.push_back(Point2f(477, 1698));
	pts_src.push_back(Point2f(631, 1727));
	pts_src.push_back(Point2f(870, 1763));
	pts_src.push_back(Point2f(1146, 1775));
	pts_src.push_back(Point2f(1442, 1766));
	pts_src.push_back(Point2f(1772, 1730));
	pts_src.push_back(Point2f(1979, 1676));
	pts_src.push_back(Point2f(2140, 1632));



	// Four points on World image

	vector<Point2f> pts_dst;

	pts_dst.push_back(Point2f(290, 100));
	pts_dst.push_back(Point2f(290, 76));
	pts_dst.push_back(Point2f(290, 46));
	pts_dst.push_back(Point2f(290, 16));
	pts_dst.push_back(Point2f(290, -14));
	pts_dst.push_back(Point2f(290, -44));
	pts_dst.push_back(Point2f(290, -74));
	pts_dst.push_back(Point2f(290, -104));
	pts_dst.push_back(Point2f(260, 100));
	pts_dst.push_back(Point2f(260, 76));
	pts_dst.push_back(Point2f(260, 46));
	pts_dst.push_back(Point2f(260, 16));
	pts_dst.push_back(Point2f(260, -14));
	pts_dst.push_back(Point2f(260, -44));
	pts_dst.push_back(Point2f(260, -74));
	pts_dst.push_back(Point2f(260, -104));
	pts_dst.push_back(Point2f(230, 100));
	pts_dst.push_back(Point2f(230, 76));
	pts_dst.push_back(Point2f(230, 46));
	pts_dst.push_back(Point2f(230, 16));
	pts_dst.push_back(Point2f(230, -14));
	pts_dst.push_back(Point2f(230, -44));
	pts_dst.push_back(Point2f(230, -74));
	pts_dst.push_back(Point2f(230, -104));
	pts_dst.push_back(Point2f(200, 100));
	pts_dst.push_back(Point2f(200, 76));
	pts_dst.push_back(Point2f(200, 46));
	pts_dst.push_back(Point2f(200, 16));
	pts_dst.push_back(Point2f(200, -14));
	pts_dst.push_back(Point2f(200, -44));
	pts_dst.push_back(Point2f(200, -74));
	pts_dst.push_back(Point2f(200, -104));

	Mat h = findHomography(pts_dst, pts_src);

	cout << h << endl;

	getchar();

	return 0;

}
