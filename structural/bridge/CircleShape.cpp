//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_CIRCLESHAPE
#define CPPDESIGNPATTERNS_CIRCLESHAPE

#include "Shape.h"
#include "DrawingAPI.h"

class CircleShape : public Shape {
public:
    CircleShape(double x, double y, double radius, DrawingAPI *drawingAPI) :
        m_x(x), m_y(y), m_radius(radius), m_drawingAPI(drawingAPI)
    {}

    void draw() {
        m_drawingAPI->drawCircle(m_x, m_y, m_radius);
    }

    void resizeByPercentage(double pct){
        m_radius *= pct;
    }
private:
    double m_x, m_y, m_radius;
    DrawingAPI *m_drawingAPI;
};

#endif