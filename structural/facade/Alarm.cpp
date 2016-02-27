//
// Created by mariocaster on 2/27/16.
//

#include <iostream>

class Alarm {
public:
    void alarmOn(){
        std::cout<<"Alarm is on and house is secured"<< std::endl;
    }
    void alarmOff(){
        std::cout<<"Alarm is off and you can go into the house"<<std::endl;
    }
};