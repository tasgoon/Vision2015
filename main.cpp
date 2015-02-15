#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

#include "sight.h"

int main()
{
    Sight sight(1, 640, 480);
    namedWindow("image", CV_WINDOW_AUTOSIZE);
    cout << "Setup done\n";
    while (true)
    {
        //cout << "Loop iteration\n";
        imshow("image", sight.getFrame());
        cvWaitKey(10);
    }
    return 0;
}

