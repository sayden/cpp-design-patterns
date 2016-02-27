//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_NAVIGATION_H
#define CPPDESIGNPATTERNS_NAVIGATION_H


#include "Car.h"
#include "OptionsDecorator.h"
#include <iostream>

class Navigation : public OptionsDecorator {
public:
    Navigation(Car *b);
    std::string getDescription();
    double getCost();
    ~Navigation();
private:
    Car *_b;
};


#endif //CPPDESIGNPATTERNS_NAVIGATION_H
