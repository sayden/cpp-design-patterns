//
// Created by mariocaster on 2/28/16.
//

#include "Command.h"
#include "Light.cpp"

class FlipUpCommand: public Command {
public:
    FlipUpCommand(Light &light):theLight(light){}

    virtual void execute(){
        theLight.turnOn();
    }

private:
    Light &theLight;
};