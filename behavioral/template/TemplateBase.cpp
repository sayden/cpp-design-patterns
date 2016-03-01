//
// Created by mariocaster on 3/1/16.
//

#ifndef CPPDESIGNPATTERNS_DESIGNPATTERNS_TEMPLATEBASE
#define CPPDESIGNPATTERNS_DESIGNPATTERNS_TEMPLATEBASE

#include <iostream>


class TemplateBase {
    void a(){
        std::cout << "a " ;
    }

    void c(){
        std::cout << "c ";
    }

    void e(){
        std::cout << "e ";
    }

    virtual void ph1() = 0;
    virtual void ph2() = 0;
public:
    void execute(){
        a();
        ph1();
        c();
        ph2();
        e();
    }
};

#endif