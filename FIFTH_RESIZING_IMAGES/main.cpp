#include <opencv2/opencv.hpp>
using namespace cv;

int main(int argc, char *argv[])
{
    Mat img = imread("arnold_schwarzenegger.jpg", CV_LOAD_IMAGE_COLOR);
    if(img.empty())
       return -1;
    //showing original image which is quite large
    imshow("Original Image", img);
    waitKey(0);
    //resizeing image to fit to screen
    Size size(250,250);
    resize(img,img,size);
    imshow("Resized Image",img);
    waitKey(0);
    return 0;
}



