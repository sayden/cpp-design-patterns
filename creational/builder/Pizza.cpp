//
// Created by mariocaster on 2/27/16.
//

#include "Pizza.h"

namespace PizzaBuilder {
    // "Product"
    void Pizza::setDough(const std::string &dough) { m_dough = dough; }

    void Pizza::setSauce(const std::string &sauce) { m_sauce = sauce; }

    void Pizza::setTopping(const std::string &topping) { m_topping = topping; }

    void Pizza::open() const {
        std::cout << "Pizza with " << m_dough << " dough, " << m_sauce << " sauce and " << m_topping
        << " topping. Mmm." << std::endl;
    }
};