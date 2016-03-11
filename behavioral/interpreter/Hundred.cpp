#ifndef CPPDESIGNPATTERNS_HUNDRED_H
#define CPPDESIGNPATTERNS_HUNDRED_H

#include <string.h>
#include "RNInterpreter.h"
#include "Thousand.cpp"

class Hundred: public RNInterpreter {
public:
    Hundred(int): RNInterpreter(1){}
protected:
    char one()
    {
        return 'C';
    }
    char *four()
    {
        return "CD";
    }
    char five()
    {
        return 'D';
    }
    char *nine()
    {
        return "CM";
    }
    int multiplier()
    {
        return 100;
    }
};

RNInterpreter::RNInterpreter()
{
    // use 1-arg ctor to avoid infinite loop
    thousands = new Thousand(1);
    hundreds = new Hundred(1);
//    tens = new Ten(1);
//    ones = new One(1);
}

int RNInterpreter::interpret(char *input)
{
    int total;
    total = 0;
    thousands->interpret(input, total);
    hundreds->interpret(input, total);
    tens->interpret(input, total);
    ones->interpret(input, total);
    if (strcmp(input, ""))
        // if input was invalid, return 0
        return 0;
    return total;
}

#endif