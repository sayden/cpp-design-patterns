//
// Created by mariocaster on 2/27/16.
//

#include <iostream>
#include "CarModel1.h"


CarModel1::CarModel1(){
    _str = "CarModel1";
}
double CarModel1::getCost(){
    return 31000.25;
}

CarModel1::~CarModel1(){
    std::cout << "~CarModel1" << std::endl;
}