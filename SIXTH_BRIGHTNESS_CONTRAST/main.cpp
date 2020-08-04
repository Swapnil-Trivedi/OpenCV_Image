#include <opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat img=imread("sample1.jpg",1);
    Mat newimg;
    float alpha=2.5;
    float beta=25;
    Size size(450,450);
    //Alpha for contrast
    //Beta for Brightness
    img.convertTo(newimg,0,alpha,beta);
    Mat imgo;
    resize(img,img,size);
    resize(newimg,newimg,size);
    //putting to images side by side
    hconcat(img,newimg,imgo);
    //Left is original Image
    //puting text on an image
    putText(imgo,"Before",Point(20,35),FONT_HERSHEY_COMPLEX,1,Scalar(0,0,255),2);
    putText(imgo,"After",Point(470,35),FONT_HERSHEY_COMPLEX,1,Scalar(0,0,255),2);
    imshow("Image",imgo);
    waitKey(0);
    return 0;
}



