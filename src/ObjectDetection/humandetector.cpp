//
// Projectname: amos-ss16-proj5
//
// Copyright (c) 2016 de.fau.cs.osr.amos2016.gruppe5
//
// This file is part of the AMOS Project 2016 @ FAU
// (Friedrich-Alexander University Erlangen-Nürnberg)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public
// License along with this program. If not, see
// <http://www.gnu.org/licenses/>.
//

//#include "../../docker/assets/openCV/include/opencv2/opencv.hpp"
#include <opencv2/opencv.hpp>

using namespace cv;

void detectAndDisplay(cv::Mat image);

const int KEY_ESC = 27;

HOGDescriptor hog;
int main (int argc, const char * argv[])
{
    if(argc < 2){
        std::cout << "Usage " << argv[0] << " video.mp4" << std::endl;
        return 0;
    }
    
    //set hog detector
    hog.setSVMDetector(cv::HOGDescriptor::getDefaultPeopleDetector());
    
    //open video
    cv::VideoCapture capture(argv[1]);
    if (!capture.isOpened()){
        std::cout << "Failed to open video" << std::endl;
        return -1;
    }
    
    //run video
    cv::Mat frame;
    do{
        if (!capture.read(frame))
            break;
        detectAndDisplay(frame);
        char key = cvWaitKey(10);
        if (key == KEY_ESC)
            break;
    } while(1);
    
    return 0;
}

void detectAndDisplay(cv::Mat frame){
    std::vector<Rect> foundHumans;
    hog.detectMultiScale(frame, foundHumans, 0, Size(8,8), Size(32,32), 1.05, 2);
    
    //add retangle to found humans
    for (int i=0; i<foundHumans.size(); i++){
        Rect r = foundHumans[i];
        rectangle(frame, r.tl(), r.br(), Scalar(255,255,255), 3);
    }
    imshow("demo", frame);
}