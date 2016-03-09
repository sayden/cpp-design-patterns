//
// Created by mariocaster on 3/9/16.
//

#ifndef CPPDESIGNPATTERNS_TLGREEN_H
#define CPPDESIGNPATTERNS_TLGREEN_H


#include "TLState.h"
#include "TLNetTraffic.h"

class TLGreen: public TLState {
private:
    TLNetTraffic* _context;

public:
    TLGreen(TLNetTraffic* context);
    void Handle();
};


#endif //CPPDESIGNPATTERNS_TLGREEN_H
