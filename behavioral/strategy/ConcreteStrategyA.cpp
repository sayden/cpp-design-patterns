//
// Created by mariocaster on 2/29/16.
//

#include <iostream>
#include "StrategyInterface.h"

class ConcreteStrategyA : public StrategyInterface {
public:
    virtual void execute() const {
        std::cout << "Called ConcreteStrategyA execute method" << std::endl;
    }
};