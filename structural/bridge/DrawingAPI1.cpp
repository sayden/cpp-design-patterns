//
// Created by mariocaster on 2/27/16.
//

#include <iostream>
#include "DrawingAPI.h"

#ifndef CPPDESIGNPATTERNS_DRAWING_API_1
#define CPPDESIGNPATTERNS_DRAWING_API_1

class DrawingAPI1 : public DrawingAPI{
public:
    void drawCircle(double x, double y, double radius){
        std::cout << "API1.circle at " << x << ':' << y << ' ' << radius << std::endl;
    }
};

#endif