#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv/cv.h>
using namespace cv;

int main(int argc, char *argv[])
{
    cv::Mat img = cv::imread("lena.jpg", CV_LOAD_IMAGE_COLOR);
    if(img.empty())
       return -1;
    namedWindow( "lena", CV_WINDOW_AUTOSIZE );
    imshow("lena", img);
    waitKey(0);
    return 0;
}



