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

    //CREATIONAL
    printPattern(DESIGN_PATTERN_BUILDER);
    printPattern(DESIGN_PATTERN_FACTORY);

    //STRUCTURAL
    printPattern(DESIGN_PATTERN_PROTOTYPE);
    printPattern(DESIGN_PATTERN_ADAPTER);
    printPattern(DESIGN_PATTERN_BRIDGE);
    printPattern(DESIGN_PATTERN_COMPOSITE);
    printPattern(DESIGN_PATTERN_DECORATOR);
    printPattern(DESIGN_PATTERN_FACADE);
    printPattern(DESIGN_PATTERN_FLYWEIGHT);
    printPattern(DESIGN_PATTERN_PROXY);

    //BEHAVIORAL
    printPattern(DESIGN_PATTERN_CHAIN_OF_RESPONSABILITY);
    printPattern(DESIGN_PATTERN_COMMAND);
    printPattern(DESIGN_PATTERN_STRATEGY);
    printPattern(DESIGN_PATTERN_TEMPLATE);
    printPattern(DESIGN_PATTERN_OBSERVER);
    printPattern(DESIGN_PATTERN_STATE);

    return 0;
}