//
// Created by mariocaster on 3/3/16.
//

#include "Observer.h"


Observer::Observer(Subject *mod, int div) {
    model = mod;
    denom = div;

    model->attach(this);
}

Subject *Observer::getSubject() {
    return model;
}

int Observer::getDivisor() {
    return denom;
}



void Subject::notify() {
    // 5. Publisher broadcasts
    for (int i = 0; i < views.size(); i++)
        views[i]->update();
}