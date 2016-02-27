//
// Created by mariocaster on 2/27/16.
//

#include "ComputerFactory.h"

namespace ComputerFactory {
    Computer* ComputerFactory::NewComputer(const std::string &description) {
        if(description == "laptop"){
            return new Laptop;
        } else if (description == "desktop"){
            return new Desktop;
        } else {
            return NULL;
        }
    }
}