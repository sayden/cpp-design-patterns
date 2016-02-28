//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_DESIGNPATTERNS_H
#define CPPDESIGNPATTERNS_DESIGNPATTERNS_H

#include <string>
#include "creational/builder/Pizza.h"

#define DESIGN_PATTERN_BUILDER 0
#define DESIGN_PATTERN_FACTORY 1
#define DESIGN_PATTERN_PROTOTYPE 2
#define DESIGN_PATTERN_SINGLETON 3
#define DESIGN_PATTERN_ADAPTER 4
#define DESIGN_PATTERN_BRIDGE 5
#define DESIGN_PATTERN_COMPOSITE 6
#define DESIGN_PATTERN_DECORATOR 7
#define DESIGN_PATTERN_FACADE 8
#define DESIGN_PATTERN_FLYWEIGHT 9
#define DESIGN_PATTERN_PROXY 10

class DesignPatterns {
public:
    static void execute(int pattern);
    static std::string getDesignPatternName(int pattern);
};


#endif //CPPDESIGNPATTERNS_DESIGNPATTERNS_H
