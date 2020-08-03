#include <opencv2/opencv.hpp> //Includes almost a majority of modules that we need
using namespace cv; //acessing namespace to avoid global operator usage

int main(int argc, char *argv[])
{
    //Opencv uses a matrix based container called Mat
    //to read an image we store it in Mat variable image and read using imread
    // imread take two parameters i.e file location or name make sure the image is in same folder as in the file
    // the second parameter is 1--color image 0--Grayscale  and  -1--unchanged
    Mat img=imread("sample1.jpeg",1);
    //we check if image is succesfully read or not
    if(img.empty())
     return -1;
    //show the image using imshow
    imshow("Sample Image",img);
    //wait for user to press a key
    waitKey(0);
    //change the parameters of imread and check for grayscale
    img=imread("sample1.jpeg",0);
    imshow("Grayscale",img);
    waitKey(0);
    return 0;
}



