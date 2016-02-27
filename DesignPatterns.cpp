//
// Created by mariocaster on 2/27/16.
//

#include "DesignPatterns.h"
#include "creational/builder/Cook.h"
#include "creational/builder/HawaiianPizzaBuilder.h"
#include "creational/builder/SpicyPizzaBuilder.h"
#include "creational/factory/ComputerFactory.h"

void DesignPatterns::execute(int pattern) {
    switch (pattern) {
        case DESIGN_PATTERN_BUILDER: {
            PizzaBuilder::Cook cook;
            PizzaBuilder::HawaiianPizzaBuilder hpb;
            PizzaBuilder::SpicyPizzaBuilder spb;

            cook.makePizza(&hpb);
            cook.openPizza();

            cook.makePizza(&spb);
            cook.openPizza();
            break;
        }
        case DESIGN_PATTERN_FACTORY:{
            ComputerFactory::Computer* d = ComputerFactory::ComputerFactory::NewComputer("desktop");
            std::cout << "First computer is " << d->getName() << std::endl;

            ComputerFactory::Computer* l = ComputerFactory::ComputerFactory::NewComputer("laptop");
            std::cout << "Second computer is " << l->getName() << std::endl;
            break;
        }
        default: std::cout << "Pattern not recognized" << std::endl;
    }
}

std::string DesignPatterns::getDesignPatternName(int pattern) {
    switch (pattern) {
        case DESIGN_PATTERN_BUILDER: return "BUILDER";
        case DESIGN_PATTERN_FACTORY: return "FACTORY";
        default: return "design pattern not recognized";
    }
}