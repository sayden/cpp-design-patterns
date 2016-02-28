//
// Created by mariocaster on 2/28/16.
//

#ifndef CPPDESIGNPATTERNS_FLYWEIGHTCHARACTERABSTRACTBUILDER_H
#define CPPDESIGNPATTERNS_FLYWEIGHTCHARACTERABSTRACTBUILDER_H

#include <iostream>
#include <vector>
#include "FlyweightCharacter.h"

class FlyweightCharacterAbstractBuilder {
private:
    FlyweightCharacterAbstractBuilder() {}
    ~FlyweightCharacterAbstractBuilder() {}
public:
    static std::vector<float> fontSizes;
    static std::vector<std::string> fontNames;
    static void setFontsAndNames();
    static FlyweightCharacter createFlyweightCharacter(unsigned short fontSizeIndex, unsigned short fontNameIndex,
                                                       unsigned short positionInStream);
};


#endif //CPPDESIGNPATTERNS_FLYWEIGHTCHARACTERABSTRACTBUILDER_H
