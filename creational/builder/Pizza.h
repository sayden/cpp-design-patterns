//
// Created by mariocaster on 2/27/16.
//

#include <string>
#include <iostream>
#include <memory>

#ifndef CPPDESIGNPATTERNS_PIZZA_H
#define CPPDESIGNPATTERNS_PIZZA_H

namespace PizzaBuilder {

    // "Product"
    class Pizza {
    private:
        std::string m_dough;
        std::string m_sauce;
        std::string m_topping;

    public:
        void setDough(const std::string& dough);
        void setSauce(const std::string& sauce);
        void setTopping(const std::string& topping);
        void open() const;
    };

}

#endif //CPPDESIGNPATTERNS_PIZZA_H