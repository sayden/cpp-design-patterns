//
// Created by mariocaster on 2/28/16.
//

#ifndef CPPDESIGNPATTERNS_FLYWEIGHTCHARACTER_H
#define CPPDESIGNPATTERNS_FLYWEIGHTCHARACTER_H

#include <iostream>

class FlyweightCharacter {
private:
    unsigned short fontSizeIndex;
    unsigned short fontNameIndex;
    unsigned short positionInStream;
public:
    FlyweightCharacter(unsigned short fontSizeIndex, unsigned short fontNameIndex, unsigned short positionInStream):
            fontSizeIndex(fontSizeIndex), fontNameIndex(fontNameIndex), positionInStream(positionInStream) {}
    void print();
    ~FlyweightCharacter() {}
};


#endif //CPPDESIGNPATTERNS_FLYWEIGHTCHARACTER_H
