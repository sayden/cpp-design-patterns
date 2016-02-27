#include <iostream>

using namespace std;

#include "DesignPatterns.h"

int main() {
    int pattern = DESIGN_PATTERN_BUILDER;
    cout << "\nDesign patterns tutorials" << endl;
    cout << "Selecting pattern..." << endl;

    //BUILDER
    cout << "\n-----> '" << DesignPatterns::getDesignPatternName(pattern) << "'" << endl;
    DesignPatterns::execute(pattern);

    //FACTORY
    pattern = DESIGN_PATTERN_FACTORY;
    cout << "\n-----> '" << DesignPatterns::getDesignPatternName(pattern) << "'" << endl;
    DesignPatterns::execute(pattern);

    //PROTOTYPE
    pattern = DESIGN_PATTERN_PROTOTYPE;
    cout << "\n-----> '" << DesignPatterns::getDesignPatternName(pattern) << "'" << endl;
    DesignPatterns::execute(pattern);

    return 0;
}