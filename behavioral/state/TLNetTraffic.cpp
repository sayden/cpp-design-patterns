//
// Created by mariocaster on 3/9/16.
//

#include "TLNetTraffic.h"
#include "TLRed.h"
#include "TLState.h"

TLNetTraffic::TLNetTraffic() {
    _state = new TLRed(this);
}

void TLNetTraffic::setState(TLState *state) {
    _state = state;
}

void TLNetTraffic::Handle() {
    _state->Handle();
}