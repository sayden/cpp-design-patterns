//
// Created by mariocaster on 3/3/16.
//

#ifndef CPPDESIGNPATTERNS_SUBJECT_H_H
#define CPPDESIGNPATTERNS_SUBJECT_H_H

#include <vector>

class Observer;

class Subject {
    std::vector<Observer *> views;
    int value;
public:
    void attach(Observer *obs);
    void setVal(int val);
    int getVal();
    void notify();
};

#endif //CPPDESIGNPATTERNS_SUBJECT_H_H
