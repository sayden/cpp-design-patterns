#include <iostream>

using namespace std;

#include "DesignPatterns.h"

void printPattern(int pattern){
    cout << "\n-----> '" << DesignPatterns::getDesignPatternName(pattern) << "'" << endl;
    DesignPatterns::execute(pattern);
}

int main() {
    cout << "\nDesign patterns tutorials" << endl;
    cout << "Selecting pattern..." << endl;

    //BUILDER
    int pattern = DESIGN_PATTERN_BUILDER;
    printPattern(pattern);

    //FACTORY
    pattern = DESIGN_PATTERN_FACTORY;
    printPattern(pattern);

    //PROTOTYPE
    pattern = DESIGN_PATTERN_PROTOTYPE;
    printPattern(pattern);

    //SINGLETON
    pattern = DESIGN_PATTERN_ADAPTER;
    printPattern(pattern);

    //BRIDGE
    pattern = DESIGN_PATTERN_BRIDGE;
    printPattern(pattern);

    return 0;
}