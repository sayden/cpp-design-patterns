//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_SPICYPIZZABUILDER_H
#define CPPDESIGNPATTERNS_SPICYPIZZABUILDER_H

#include "PizzaBuilder.h"

namespace PizzaBuilder {

class SpicyPizzaBuilder : public PizzaBuilder {
public:
    virtual ~SpicyPizzaBuilder(){};
    virtual void buildDough();
    virtual void buildSauce();
    virtual void buildTopping();
};


#endif //CPPDESIGNPATTERNS_SPICYPIZZABUILDER_H
}