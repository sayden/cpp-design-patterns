//
// Created by mariocaster on 2/28/16.
//

#include "Light.cpp"
#include "Command.h"

/*the Command for turning off the light*/
class FlipDownCommand: public Command
{
public:
    FlipDownCommand(Light& light) :theLight(light)
    {

    }
    virtual void execute()
    {
        theLight.turnOff();
    }
private:
    Light& theLight;
};