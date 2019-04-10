#include <opencv2/opencv.hpp>
#define FPS 60

int main()
{
    cv::VideoCapture cap(0);
    cv::Mat image;
    cv::Mat grayscale;
    cv::Mat mask;

    while(true)
    {
        cap>>image;
        cv::cvtColor(image,grayscale,CV_BGR2GRAY);

        cv::inRange(image,cv::Scalar(130,130,130),cv::Scalar(255,255,255),mask);
        image.setTo(cv::Scalar(80,80,255),mask);
        
        cv::imshow("Hello World",image);

        if(cv::waitKey(1000.0/FPS)==27) break;
    }
}
