//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_PIZZABUILDER_H
#define CPPDESIGNPATTERNS_PIZZABUILDER_H

#include <string>
#include <iostream>
#include <memory>

#include "Pizza.h"

namespace PizzaBuilder {

class PizzaBuilder {
public:
    virtual ~PizzaBuilder(){};

    Pizza* getPizza();
    void createNewPizzaProduct();
    virtual void buildDough() = 0;
    virtual void buildSauce() = 0;
    virtual void buildTopping() = 0;

protected:
    std::unique_ptr<Pizza> m_pizza;
};
}

#endif //CPPDESIGNPATTERNS_PIZZABUILDER_H
