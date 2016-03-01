//
// Created by mariocaster on 3/1/16.
//

#include <iostream>
#include "TemplateBase.cpp"

class One : public TemplateBase {
    void ph1() {
        std::cout << "b ";
    }

    void ph2() {
        std::cout << "d ";
    }
};