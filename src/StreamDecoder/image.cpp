//
// Projectname: amos-ss16-proj5
//
// Created on 21.05.2016.
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


#include <sstream>

#include "image.h"


namespace patch{

    template < typename T > std::string to_string( const T& n ){

        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;

    }

}

Image::Image(const cv::Mat rgb_image, int width, int height){

   rgb_image_ = rgb_image;
   image_width_ = width;
   image_height_ = height;

}

Image::~Image(){

}

int Image::GetImageWidth(){

    return image_width_;
}

int Image::GetImageHeight(){

    return image_height_;
}

Mat Image::GetBGRImage(){

    Mat rgb_image = this->GetRGBImage();

   //convert BGGR image to BGR
   // Mat bggr_8bit_image = bggr_image.clone();
   // bggr_8bit_image.convertTo(bggr_8bit_image, CV_8UC1);

    Mat rgb_8bit_image(this->GetImageHeight(), this->GetImageWidth(), CV_8UC3);
    cvtColor(rgb_image, rgb_8bit_image, CV_BayerGR2BGR);

    return rgb_8bit_image;
}

Mat Image::GetRGBImage(){
    return rgb_image_;
}