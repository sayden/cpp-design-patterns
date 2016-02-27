//
// Created by mariocaster on 2/27/16.
//

#include "PizzaBuilder.h"

namespace PizzaBuilder {
    Pizza* PizzaBuilder::getPizza(){ return m_pizza.get(); }
    void PizzaBuilder::createNewPizzaProduct(){ m_pizza = std::unique_ptr<Pizza>(new Pizza()); }
}