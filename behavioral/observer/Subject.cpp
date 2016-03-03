//
// Created by mariocaster on 3/3/16.
//

#include "Subject.h"

void Subject::attach(Observer *obs) {
    views.push_back(obs);
}

void Subject::setVal(int val) {
    value = val;
    notify();
}

int Subject::getVal() {
    return value;
}