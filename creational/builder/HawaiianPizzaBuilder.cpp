//
// Created by mariocaster on 2/27/16.
//

#include "HawaiianPizzaBuilder.h"

namespace PizzaBuilder {
    void HawaiianPizzaBuilder::buildDough() { m_pizza->setDough("cross"); }
    void HawaiianPizzaBuilder::buildSauce(){ m_pizza->setSauce("mild"); }
    void HawaiianPizzaBuilder::buildTopping(){ m_pizza->setTopping("ham+pinneaple"); }
}