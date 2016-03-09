//
// Created by mariocaster on 3/9/16.
//

#include <stdio.h>
#include "TLGreen.h"
#include "TLYellow.h"

TLGreen::TLGreen(TLNetTraffic *context): _context(context){}

void TLGreen::Handle() {
    printf("Green Light\n");
    _context->setState(new TLYellow(_context));
}