//
// Created by mariocaster on 2/28/16.
//

#include "FlyweightCharacter.h"
#include "FlyweightCharacterAbstractBuilder.h"


void FlyweightCharacter::print() {
    std::cout << "Font Size: " << FlyweightCharacterAbstractBuilder::fontSizes[fontSizeIndex]
    << ", font Name: " << FlyweightCharacterAbstractBuilder::fontNames[fontNameIndex]
    << ", character stream position: " << positionInStream << std::endl;
}

