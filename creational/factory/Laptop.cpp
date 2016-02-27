//
// Created by mariocaster on 2/27/16.
//

#include "Laptop.h"

namespace ComputerFactory {
    void Laptop::Run() { mHibernating = true; }
    void Laptop::Stop() { mHibernating = false; }
    std::string Laptop::getName() { return "laptop"; }
}