//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_COMPUTERFACTORY_H
#define CPPDESIGNPATTERNS_COMPUTERFACTORY_H

#include <string>
#include "Computer.h"
#include "Laptop.h"
#include "Desktop.h"

namespace ComputerFactory {

class ComputerFactory {

public:
    static Computer* NewComputer(const std::string &description);
};

}   //ComputerFactory

#endif //CPPDESIGNPATTERNS_COMPUTERFACTORY_H
