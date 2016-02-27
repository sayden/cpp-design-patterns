//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_GRAPHIC_H
#define CPPDESIGNPATTERNS_GRAPHIC_H

class Graphic {
public:
    virtual void print() const = 0;
    virtual ~Graphic(){}
};

#endif //CPPDESIGNPATTERNS_GRAPHIC_H
