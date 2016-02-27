//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_COMPOSITEGRAPHIC_H
#define CPPDESIGNPATTERNS_COMPOSITEGRAPHIC_H

#include <vector>
#include <iostream> // std::cout
#include <memory> // std::auto_ptr
#include <algorithm> // std::for_each
#include "Graphic.h"

class CompositeGraphic : public Graphic {
public:
    void print() const;
    void add(Graphic *aGraphic);
private:
    std::vector<Graphic*> graphicList;
};


#endif //CPPDESIGNPATTERNS_COMPOSITEGRAPHIC_H
