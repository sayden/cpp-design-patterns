//
// Created by mariocaster on 3/9/16.
//

#include <stdio.h>
#include "TLRed.h"
#include "TLGreen.h"

TLRed::TLRed(TLNetTraffic *context): _context(context){}

void TLRed::Handle() {
    printf("Red light\n");
    _context->setState(new TLGreen(_context));
}