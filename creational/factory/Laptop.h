//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_LAPTOP_H
#define CPPDESIGNPATTERNS_LAPTOP_H

#include <string>
#include "Computer.h"

namespace ComputerFactory {

class Laptop : public Computer {
public:
    virtual void Run();
    virtual void Stop();
    virtual ~Laptop(){};
    virtual std::string getName();
private:
    bool mHibernating;
};

}

#endif //CPPDESIGNPATTERNS_LAPTOP_H
