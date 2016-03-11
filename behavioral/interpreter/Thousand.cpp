
//
// Created by mariocaster on 3/11/16.
//

#ifndef CPPDESIGNPATTERNS_THOUSAND_H
#define CPPDESIGNPATTERNS_THOUSAND_H

#include "RNInterpreter.h"

class Thousand: public RNInterpreter {
public:
    Thousand(int): RNInterpreter(1){}

protected:
    char one(){
        return 'M';
    }

    char *four(){
        return "";
    }

    char five(){
        return '\0';
    }

    char *nine(){
        return "";
    }

    int multiplier(){
        return 1000;
    }
};


#endif //CPPDESIGNPATTERNS_THOUSAND_H
