//
// Created by mariocaster on 3/9/16.
//

#ifndef CPPDESIGNPATTERNS_TLYELLOW_H
#define CPPDESIGNPATTERNS_TLYELLOW_H


#include "TLNetTraffic.h"
#include "TLState.h"

class TLYellow: public TLState {
private:
    TLNetTraffic* _context;

public:
    TLYellow(TLNetTraffic* context);
    void Handle();
};


#endif //CPPDESIGNPATTERNS_TLYELLOW_H
