//
// Created by mariocaster on 2/29/16.
//

#include <iostream>
#include "StrategyInterface.h"

class ConcreteStrategyB : public StrategyInterface {
public:
    virtual void execute() const {
        std::cout << "Execute ConcreteStrategyB execute method" << std::endl;
    }
};