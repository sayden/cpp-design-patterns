//
// Created by mariocaster on 2/28/16.
//

#include <iostream>
#include "Base.cpp"

class Handler2: public Base
{
public:
    void handle(int i)
    {
        if (std::rand() % 3)
        {
            std::cout << "H2 passsed " << i << "  ";
            Base::handle(i);
        }
        else
            std::cout << "H2 handled " << i << "  ";
    }
};
