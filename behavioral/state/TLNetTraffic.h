//
// Created by mariocaster on 3/9/16.
//

#ifndef CPPDESIGNPATTERNS_TLNETTRAFFIC_H
#define CPPDESIGNPATTERNS_TLNETTRAFFIC_H


#include "TLState.h"

class TLNetTraffic {
private:
    TLState *_state;
public:
    TLNetTraffic();
    void setState(TLState *state);
    void Handle();
};


#endif //CPPDESIGNPATTERNS_TLNETTRAFFIC_H
