//
// Created by mariocaster on 2/27/16.
//

#include "Desktop.h"

namespace ComputerFactory {
    void Desktop::Run() { mOn = true; }
    void Desktop::Stop() { mOn = false; }
    std::string Desktop::getName() { return "desktop"; }
}