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

class DesignPatterns {
public:
    static void execute(int pattern);
    static std::string getDesignPatternName(int pattern);
};


#endif //CPPDESIGNPATTERNS_DESIGNPATTERNS_H
