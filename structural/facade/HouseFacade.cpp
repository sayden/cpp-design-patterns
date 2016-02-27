//
// Created by mariocaster on 2/27/16.
//

#include "Alarm.cpp"
#include "Ac.cpp"
#include "Tv.cpp"

class HouseFacade{
private:
    Alarm alarm;
    Ac ac;
    Tv tv;
public:
    HouseFacade(){}

    void goToWork(){
        ac.acOff();
        tv.tvOff();
        alarm.alarmOn();
    }

    void comeHome(){
        alarm.alarmOff();
        ac.acOn();
        tv.tvOn();
    }
};