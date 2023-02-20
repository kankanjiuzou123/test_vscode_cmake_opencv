#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
    Mat image;
    image = imread("/home/ros/test_vscode_cmake_opencv/src/lena.jpg");

    imshow("test",image);
    waitKey(0);

    return 0;
}