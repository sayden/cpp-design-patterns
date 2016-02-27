//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_COMPUTER_H
#define CPPDESIGNPATTERNS_COMPUTER_H

#include <string>

namespace ComputerFactory {

class Computer {
public:
    virtual ~Computer(){};

    virtual void Run() = 0;
    virtual void Stop() = 0;
    virtual std::string getName() = 0;
};

}
#endif //CPPDESIGNPATTERNS_COMPUTER_H
