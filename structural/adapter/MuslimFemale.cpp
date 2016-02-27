//
// Created by mariocaster on 2/27/16.
//

#include <iostream>
#include "Muslim.cpp"

class MuslimFemale: public Muslim {
public:
    virtual void performMuslimRitual() const override {
        std::cout << "Muslim girl performs muslim ritual" << std::endl;
    }
};