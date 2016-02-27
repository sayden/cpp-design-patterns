//
// Created by mariocaster on 2/27/16.
//

#include <iostream>
#include "ManualTransmission.h"

ManualTransmission::ManualTransmission(Car *b){
    _b = b;
}

std::string ManualTransmission::getDescription(){
    return _b->getDescription() + ", ManualTransmission";
}
double ManualTransmission::getCost(){
    return 3000 + _b->getCost();
}

ManualTransmission::~ManualTransmission(){
    std::cout << "~ManualTransmission" << std::endl;
}