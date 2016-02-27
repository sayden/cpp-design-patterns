//
// Created by mariocaster on 2/27/16.
//

#include <iostream>
#include "Muslim.cpp"
#include "Hindu.cpp"

class MuslimAdapter: public Muslim {
private:
    Hindu *hindu;
public:
    MuslimAdapter (Hindu* h): hindu(h) {}
    virtual void performMuslimRitual() const override {
        hindu->performsHinduRitual();
    }
};