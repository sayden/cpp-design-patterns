//
// Created by mariocaster on 3/11/16.
//

#ifndef CPPDESIGNPATTERNS_RNINTERPRETER_H
#define CPPDESIGNPATTERNS_RNINTERPRETER_H


class RNInterpreter {
public:
    RNInterpreter();
    RNInterpreter(int){}
    int interpret(char*);
    virtual void interpret(char *input, int &total);

protected:
    virtual char one(){}
    virtual char *four(){}
    virtual char five(){}
    virtual char *nine(){}
    virtual int multiplier(){}
private:
    RNInterpreter *thousands;
    RNInterpreter *hundreds;
    RNInterpreter *tens;
    RNInterpreter *ones;
};


#endif //CPPDESIGNPATTERNS_RNINTERPRETER_H
