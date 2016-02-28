//
// Created by mariocaster on 2/28/16.
//

#ifndef CPPDESIGNPATTERNS_REAL_IMAGE
#define CPPDESIGNPATTERNS_REAL_IMAGE

#include <iostream>

class RealImage {
    int m_id;
public:
    RealImage(int i){
        m_id = 1;
        std::cout << "    $$ ctor: " << m_id << std::endl;
    }

    ~RealImage(){
        std::cout << "    dtor: " << m_id << std::endl;
    }

    void draw(){
        std::cout << "    drawing real image " << m_id << std::endl;
    }
};

#endif