//
// Created by mariocaster on 3/1/16.
//

#include <iostream>
#include "TemplateBase.cpp"

class Two: public TemplateBase {
    void ph1() {
        std::cout << "2 ";
    }
    void ph2() {
        std::cout << "4 ";
    }
};