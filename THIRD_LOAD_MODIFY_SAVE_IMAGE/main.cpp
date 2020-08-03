#include <opencv2/opencv.hpp>
using namespace cv;
int main(int argc, char *argv[])
{
   //loading image using imread
   Mat img=imread("apple.jpeg",1);
   //changing image to grayscale
   cvtColor(img,img,CV_RGB2GRAY);
   imshow("Grayscale of Original Image",img);
   waitKey(0);
   //saving the grayscale image
   //imwrite will save the image in the current directory so unless you don't want to save in same directory
   //always specify the location
   //imwrite have to parameters the location with filetype and the object we just created
   //i will store the image in same directory
   imwrite("grayapple.jpeg",img);
   destroyAllWindows();
    return 0;
}



