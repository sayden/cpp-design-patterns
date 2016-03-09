//
// Created by mariocaster on 3/9/16.
//

#ifndef CPPDESIGNPATTERNS_TLRED_H
#define CPPDESIGNPATTERNS_TLRED_H

#include "TLNetTraffic.h"
#include "TLState.h"

class TLRed: public TLState {
private:
    TLNetTraffic *_context;
public:
    TLRed(TLNetTraffic *context);
    void Handle();
};

#endif //CPPDESIGNPATTERNS_TLRED_H
