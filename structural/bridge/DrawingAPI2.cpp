//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_DRAWINGAPI2
#define CPPDESIGNPATTERNS_DRAWINGAPI2

#include <iostream>
#include "DrawingAPI.h"

class DrawingAPI2 : public DrawingAPI {
    void drawCircle(double x, double y, double radius){
        std::cout << "API2.circle at " << x << ':' << y << ' ' <<  radius << std::endl;
    }
};

#endif