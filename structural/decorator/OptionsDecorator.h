//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_OPTIONSDECORATOR_H
#define CPPDESIGNPATTERNS_OPTIONSDECORATOR_H


#include "Car.h"

class OptionsDecorator : public Car {
public:
    virtual std::string getDescription() = 0;
    virtual ~OptionsDecorator();
};


#endif //CPPDESIGNPATTERNS_OPTIONSDECORATOR_H
