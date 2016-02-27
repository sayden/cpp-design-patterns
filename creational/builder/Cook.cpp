//
// Created by mariocaster on 2/27/16.
//

#include "Cook.h"

namespace PizzaBuilder {
    void Cook::openPizza() { m_pizzaBuilder->getPizza()->open(); }
    void Cook::makePizza(PizzaBuilder *pb) {
        m_pizzaBuilder = pb;
        m_pizzaBuilder->createNewPizzaProduct();
        m_pizzaBuilder->buildDough();
        m_pizzaBuilder->buildSauce();
        m_pizzaBuilder->buildTopping();
    }
}