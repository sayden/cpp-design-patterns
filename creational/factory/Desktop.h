//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_DESKTOP_H
#define CPPDESIGNPATTERNS_DESKTOP_H

#include "Computer.h"
#include <string>

namespace ComputerFactory {

class Desktop : public Computer {
    virtual void Run();
    virtual void Stop();
    virtual std::string getName();
    virtual ~Desktop(){};
private:
    bool mOn;
};
}

#endif //CPPDESIGNPATTERNS_DESKTOP_H
