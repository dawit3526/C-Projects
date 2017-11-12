#include <iostream>
#include <string>
#include <sstream>
#include <opencv2/opencv.hpp>
#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/video.hpp>
using namespace cv;
using namespace std;


const char* keys =
{

"{help h usage ? | | print this message}"
"{@video | | Video file, if not defined try to use webcamera}"


};
Mat Cartoonize(Mat img){

Mat imagMedian;
medianBlur(img,imagMedian,7);
Mat imgCanney;
Canny(imagMedian,imgCanney,50,150);
Mat kerenel = getStructuringElement(MORPH_RECT,Size(2,2));
dilate(imgCanney,imgCanney,kerenel);

imgCanney = imgCanney/255;
imgCanney = 1-imgCanney;

Mat imgCanneyf;
imgCanney.convertTo(imgCanneyf,CV_32FC3);

blur(imgCanneyf,imgCanneyf,Size(5,5));

Mat imBF;
bilateralFilter(img,imBF,9,150.0,150.0);

Mat result =imBF/25;
result =result*25;

Mat imgCanney3c ;
Mat cannyChannels[] ={imgCanneyf,imgCanneyf,imgCanneyf};
merge(cannyChannels,3,imgCanney3c);

Mat resultf;
result.convertTo(resultf,CV_32FC3);
multiply(resultf,imgCanney3c,resultf);
resultf.convertTo(result,CV_8UC3);
return result;

}
int main(int argc,const char** argv){

VideoCapture cap(0); // open the default camera
    if(!cap.isOpened())  // check if we succeeded
        return -1;

    Mat edges;
    namedWindow("edges",1);
    for(;;)
    {
        Mat frame;
        cap >> frame; // get a new frame from camera
       //cvtColor(frame, edges, COLOR_BGR2GRAY);
        //GaussianBlur(edges, edges, Size(7,7), 1.5, 1.5);
        //Canny(edges, edges, 0, 30, 3);
        edges = Cartoonize(frame);
        imshow("edges", edges);
        if(waitKey(30) >= 0) break;
    }
    // the camera will be deinitialized automatically in VideoCapture destructor
    return 0;

}




