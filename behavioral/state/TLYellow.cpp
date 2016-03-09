//
// Created by mariocaster on 3/9/16.
//

#include <stdio.h>
#include "TLYellow.h"
#include "TLRed.h"

TLYellow::TLYellow(TLNetTraffic* context): _context(context) {};

void TLYellow::Handle()
{
    printf("Yellow Light\n");
    _context->setState( new TLRed(_context) );
}