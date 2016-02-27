//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_DRAWINGAPI_H
#define CPPDESIGNPATTERNS_DRAWINGAPI_H

class DrawingAPI{
public:
    virtual void drawCircle(double x, double y, double radius) = 0;
    virtual ~DrawingAPI(){}
};

#endif //CPPDESIGNPATTERNS_DRAWINGAPI_H
