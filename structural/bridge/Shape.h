//
// Created by mariocaster on 2/27/16.
//


#ifndef CPPDESIGNPATTERNS_SHAPE
#define CPPDESIGNPATTERNS_SHAPE

class Shape {
public:
    virtual ~Shape(){}
    virtual void draw() = 0;
    virtual void resizeByPercentage(double pct) = 0;
};

#endif