//
// Created by mariocaster on 2/27/16.
//

#include "Hindu.cpp"
#include <iostream>

class HinduFemale: public Hindu {
public:
    virtual void performsHinduRitual() const override {
        std::cout << "Hindu girl performs Hindu ritual" << std::endl;
    }
};