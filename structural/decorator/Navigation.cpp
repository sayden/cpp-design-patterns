//
// Created by mariocaster on 2/27/16.
//

#include "Navigation.h"


Navigation::Navigation(Car *b){
    _b = b;
}

std::string Navigation::getDescription(){
    return _b->getDescription() + ", Navigation";
}
double Navigation::getCost(){
    return 300.56 + _b->getCost();
}

Navigation::~Navigation(){
    std::cout << "~Navigation()" << std::endl;
}