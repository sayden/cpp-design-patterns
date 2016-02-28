//
// Created by mariocaster on 2/28/16.
//

#include "FlyweightCharacterAbstractBuilder.h"

FlyweightCharacter FlyweightCharacterAbstractBuilder::createFlyweightCharacter(
        unsigned short fontSizeIndex, unsigned short fontNameIndex, unsigned short positionInStream){
    FlyweightCharacter fc(fontSizeIndex, fontNameIndex, positionInStream);
    return fc;
}
std::vector<float> FlyweightCharacterAbstractBuilder::fontSizes(3);
std::vector<std::string> FlyweightCharacterAbstractBuilder::fontNames(3);
void FlyweightCharacterAbstractBuilder::setFontsAndNames() {
    fontSizes[0] = 1.0;
    fontSizes[1] = 1.5;
    fontSizes[2] = 2.0;

    fontNames[0] = "first_font";
    fontNames[1] = "second_font";
    fontNames[2] = "third_font";
}