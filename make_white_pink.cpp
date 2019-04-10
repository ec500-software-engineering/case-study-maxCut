#include <opencv2/opencv.hpp>
#define FPS 60

int color_slider = 80;
const int slider_max = 255;

void on_trackbar( int, void* )
{
}


int main()
{
    cv::VideoCapture cap(0);
    cv::Mat image;
    cv::Mat grayscale;
    cv::Mat mask;

    char TrackbarName[50] ;

    sprintf( TrackbarName, "Color Control");

    cv::namedWindow("Hello World", 1);
    cv::createTrackbar( TrackbarName, "Hello World", &color_slider, slider_max, on_trackbar );

    while(true)
    {
        cap>>image;
        cv::cvtColor(image,grayscale,CV_BGR2GRAY);

        cv::inRange(image,cv::Scalar(130,130,130),cv::Scalar(255,255,255),mask);
        image.setTo(cv::Scalar(color_slider,color_slider,255),mask);
        
        cv::imshow("Hello World",image);

        if(cv::waitKey(1000.0/FPS)==27) break;
    }
}
