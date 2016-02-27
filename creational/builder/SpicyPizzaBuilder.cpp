//
// Created by mariocaster on 2/27/16.
//

#include "SpicyPizzaBuilder.h"

namespace PizzaBuilder {
    void SpicyPizzaBuilder::buildDough() { m_pizza->setDough("pan banked"); }
    void SpicyPizzaBuilder::buildSauce() { m_pizza->setSauce("hot"); }
    void SpicyPizzaBuilder::buildTopping() {m_pizza->setTopping("pepperoni+salami"); }
}