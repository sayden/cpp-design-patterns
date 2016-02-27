//
// Created by mariocaster on 2/27/16.
//

#include <iostream>
#include "Car.h"

Car::Car() {
    _str = "Unknown car";
}

std::string Car::getDescription() {
    return _str;
}

Car::~Car() {
    std::cout << "~Car()" << std::endl;
}