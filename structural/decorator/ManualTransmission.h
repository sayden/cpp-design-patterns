//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_MANUALTRANSMISSION_H
#define CPPDESIGNPATTERNS_MANUALTRANSMISSION_H


#include "Car.h"
#include "OptionsDecorator.h"

class ManualTransmission: public OptionsDecorator {
private:
    Car *_b;
public:
    ManualTransmission(Car *b);
    std::string getDescription();
    double getCost();
    ~ManualTransmission();
};


#endif //CPPDESIGNPATTERNS_MANUALTRANSMISSION_H
