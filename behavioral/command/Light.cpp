//
// Created by mariocaster on 2/28/16.
//

#include <iostream>

#ifndef CPPDESIGNPATTERNS_DESIGNPATTERNS_BEHAVIORAL_COMMAND_LIGHT
#define CPPDESIGNPATTERNS_DESIGNPATTERNS_BEHAVIORAL_COMMAND_LIGHT

class Light{
public:
    Light(){}

    void turnOn(){
        std::cout << "The light is on" << std::endl;
    }

    void turnOff(){
        std::cout << "The light is off" << std::endl;
    }
};

#endif