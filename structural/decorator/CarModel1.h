//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_CARMODEL1_H
#define CPPDESIGNPATTERNS_CARMODEL1_H


#include "Car.h"

class CarModel1 : public Car{
public:
    CarModel1();
    virtual double getCost();
    ~CarModel1();
};


#endif //CPPDESIGNPATTERNS_CARMODEL1_H
