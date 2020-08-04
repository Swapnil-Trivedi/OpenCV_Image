#include <opencv2/opencv.hpp>
using namespace cv;
const int maxval=20;
const int maxvalbeta=500;
Mat img;
double alpha;
double beta;
//trackbar
//name || windowname || initial alpha slider || max value || function
static void contrast(int alpha_val,void *)
{
  alpha=alpha_val*0.1;
  Mat iml;
  img.convertTo(iml,0,alpha,beta);
  imshow("IMAGE",iml);
}

static void brightness(int beta_val,void *)
{
  beta=beta_val;
  Mat iml;
  img.convertTo(iml,0,alpha,beta);
  imshow("IMAGE",iml);
}

int main(int argc, char *argv[])
{
    img = imread("arnold_schwarzenegger.jpg", CV_LOAD_IMAGE_COLOR);
    if(img.empty())
       return -1;
    Size size(500,500);
    resize(img,img,size);
    int alpha_val=10;
    int beta_val=40;
    namedWindow("IMAGE",CV_WINDOW_AUTOSIZE);
    createTrackbar("Contrast","IMAGE",&alpha_val,maxval,contrast);
    createTrackbar("Brightness","IMAGE",&beta_val,maxvalbeta,brightness);
    contrast(alpha_val,0);
    brightness(beta_val,0);
    waitKey(0);
    return 0;
}



