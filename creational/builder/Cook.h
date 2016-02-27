//
// Created by mariocaster on 2/27/16.
//

#include "PizzaBuilder.h"

#ifndef CPPDESIGNPATTERNS_COOK_H
#define CPPDESIGNPATTERNS_COOK_H

namespace PizzaBuilder {

class Cook {
public:
    void openPizza();
    void makePizza(PizzaBuilder* pb);

private:
    PizzaBuilder* m_pizzaBuilder;

};


#endif //CPPDESIGNPATTERNS_COOK_H
}