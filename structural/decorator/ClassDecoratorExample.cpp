//
// Created by mariocaster on 2/27/16.
//

#include <iostream>
#include "ClassDecoratorExample.h"
#include "CarModel1.h"
#include "Navigation.h"
#include "ManualTransmission.h"

void ClassDecoratorExample::execute(){
    Car *b = new CarModel1();

    std::cout << "Base model of " << b->getDescription() << " costs $" << b->getCost() << std::endl;

    b = new Navigation(b);
    std::cout << b->getDescription() << " will cost you $" << b->getCost() << std::endl;
    b = new ManualTransmission(b);

    std::cout << b->getDescription() << " will cost you $" << b->getCost() << std::endl;

    delete b;
}
