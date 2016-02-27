//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_HAWAIIANPIZZABUILDER_H
#define CPPDESIGNPATTERNS_HAWAIIANPIZZABUILDER_H


#include "PizzaBuilder.h"

namespace PizzaBuilder {

class HawaiianPizzaBuilder : public PizzaBuilder {
public:
    virtual ~HawaiianPizzaBuilder(){};
    virtual void buildDough();
    virtual void buildSauce();
    virtual void buildTopping();
};


#endif //CPPDESIGNPATTERNS_HAWAIIANPIZZABUILDER_H
}