//
// Created by mariocaster on 3/3/16.
//

#include <iostream>
#include "Observer.h"

class ModObserver : public Observer {
public:
    ModObserver(Subject *mod, int div): Observer(mod, div){}
    void update(){
        int v = getSubject()->getVal(), d = getDivisor();
        std::cout << v << " mod " << d << " is " << v % d << std::endl;
    }
};