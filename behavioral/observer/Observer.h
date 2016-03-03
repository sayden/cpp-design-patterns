//
// Created by mariocaster on 3/3/16.
//


#ifndef CPPDESIGNPATTERNS_BEHAVIORAL_OBSERVER
#define CPPDESIGNPATTERNS_BEHAVIORAL_OBSERVER


#include "Subject.h"

class Observer {
    Subject *model;
    int denom;
public:
    Observer(Subject *mod, int div);
    virtual void update() = 0;
protected:
    Subject *getSubject();
    int getDivisor();
};

#endif