//
// Created by mariocaster on 2/28/16.
//

#ifndef CPPDESIGNPATTERNS_IMAGE_H
#define CPPDESIGNPATTERNS_IMAGE_H

#include "RealImage.cpp"

class Image{
    RealImage *m_the_real_thing;
    int m_id;
    static int s_next;
public:
    Image();
    ~Image();
    void draw();
};

#endif //CPPDESIGNPATTERNS_IMAGE_H
