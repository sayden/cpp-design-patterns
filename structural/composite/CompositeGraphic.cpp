//
// Created by mariocaster on 2/27/16.
//

#include "CompositeGraphic.h"

void CompositeGraphic::print() const {
    std::for_each(graphicList.begin(), graphicList.end(), [](Graphic* a){
        a->print();
    });
}

void CompositeGraphic::add(Graphic *aGraphic) {
    graphicList.push_back(aGraphic);
}