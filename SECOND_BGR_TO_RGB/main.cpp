#include <opencv2/opencv.hpp>
using namespace cv;

int main(int argc, char *argv[])
{   //loading image
    Mat img = imread("sample.png", 1);
    if(img.empty())
       return -1;
    //displaying image
    //even though opencv works wiith BGR the dispaly command turn it back to RGB for avoiding user confusion
    imshow("IMAGE", img);
    waitKey(0);
    //we will try to see how to manually convert RGB to BGR and vice versa
    //Converting to BGR
    //simple command cvtColor
    Mat BGR;
    //input output and operation is general format for cvtColor
    cvtColor(img,BGR,CV_RGB2BGR);
    //let's check out output
    imshow("BGR",BGR);
    waitKey(0);
    //now it is sure that blue isn't blue anymore
    //lets go back to RGB
    cvtColor(BGR,BGR,CV_BGR2RGB);
    imshow("RGB",BGR);
    waitKey(0);
    return 0;
}



