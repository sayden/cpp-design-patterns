//
// Created by mariocaster on 3/11/16.
//

#include <string.h>
#include "RNInterpreter.h"

void RNInterpreter::interpret(char *input, int &total) {
    // for internal use
    int index;
    index = 0;
    if (!strncmp(input, nine(), 2))
    {
        total += 9 * multiplier();
        index += 2;
    }
    else if (!strncmp(input, four(), 2))
    {
        total += 4 * multiplier();
        index += 2;
    }
    else
    {
        if (input[0] == five())
        {
            total += 5 * multiplier();
            index = 1;
        }
        else
            index = 0;
        for (int end = index + 3; index < end; index++)
            if (input[index] == one())
                total += 1 * multiplier();
            else
                break;
    }
    strcpy(input, &(input[index]));
}