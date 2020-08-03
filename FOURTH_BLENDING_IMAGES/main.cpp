#include <opencv2/opencv.hpp>
using namespace cv;

int main(int argc, char *argv[])
{
    //thhis is an intresting thing to work with
    //let's load our images first
    Mat blue=imread("blue.png",1);
    Mat yellow=imread("yellow.png",1);
    //we wil be combining these two images to form a circle of green color
    //Blending is nothing but adding two images together
    Mat result;
    const float alpha=0.5;
    //we make alpha a constant
    float beta=(1-alpha);
    float gamma=0.0;
    //addWeighted will do the job of blending 
    //parameters are source1,source1_transperency,source2,source2_transperency,gamma_correction,output_storage
    addWeighted(blue,alpha,yellow,beta,gamma,result);
    imshow("Blended Image",result);
    imwrite("result_image.png",result);
    waitKey(0);
    return 0;
}



