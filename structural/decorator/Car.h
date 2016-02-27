//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_CAR_H
#define CPPDESIGNPATTERNS_CAR_H

#include <string>

class Car {
protected:
    std::string _str;
public:
    Car();
    virtual std::string getDescription();
    virtual double getCost() = 0;
    virtual ~Car();
};

#endif //CPPDESIGNPATTERNS_CAR_H
