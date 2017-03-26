
//
//  hello.cpp
//  date
//
//  Created by Halcao on 2017/3/26.
//  Copyright © 2017年 Halcao. All rights reserved.
//

#include <opencv2/opencv.hpp>

using namespace std;

int main() {
    const char *pstrImageName = "./LinuxLogo.jpg";
    const char *pstrWindowTitle = "Hello World!";

    IplImage *pImage = cvLoadImage(pstrImageName, CV_LOAD_IMAGE_UNCHANGED);

    cvNamedWindow(pstrWindowTitle, CV_WINDOW_AUTOSIZE);
    cvShowImage(pstrWindowTitle, pImage);
    cvWaitKey();
    cvDestroyWindow(pstrWindowTitle);
    cvReleaseImage(&pImage);
    return 0;
}
