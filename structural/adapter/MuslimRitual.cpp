//
// Created by mariocaster on 2/27/16.
//
#include <iostream>
#include "Muslim.cpp"

class MuslimRitual {
public:
    void carryOutRitual (Muslim* muslim){
        std::cout << "On with the Muslim rituals!" << std::endl;
        muslim->performMuslimRitual();
    }
};