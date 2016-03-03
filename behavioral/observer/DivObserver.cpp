//
// Created by mariocaster on 3/3/16.
//

#include <iostream>
#include "Observer.h"

class DivObserver: public Observer {
public:
    DivObserver(Subject *mod, int div): Observer(mod, div){}
    void update(){
        int v = getSubject()->getVal(), d = getDivisor();
        std::cout << v << " div " << d << " is " << v / d << std::endl;
    }
};