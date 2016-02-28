//
// Created by mariocaster on 2/28/16.
//

#include <iostream>
#include "Base.cpp"

class Handler3: public Base
{
  public:
     void handle(int i)
    {
        if (std::rand() % 3)
        {
            std::cout << "H3 passsed " << i << "  ";
            Base::handle(i);
        }
        else
            std::cout << "H3 handled " << i << "  ";
    }
};