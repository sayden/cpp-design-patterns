//
// Created by mariocaster on 2/28/16.
//

#ifndef CPP_DESIGN_PATTERN_BEHAVIORAL_CHAIN_BASE
#define CPP_DESIGN_PATTERN_BEHAVIORAL_CHAIN_BASE

class Base {
    Base *next;
public:
    Base(){
        next = 0;
    }

    void setNext(Base *n){
        next = n;
    }


    void add(Base *n){
        if(next){
            next->add(n);
        } else {
            next = n;
        }
    }

    virtual void handle(int i){
        next->handle(i);
    }
};


#endif