//
// Created by mariocaster on 2/27/16.
//

#ifndef CPPDESIGNPATTERNS_MUSLIM
#define CPPDESIGNPATTERNS_MUSLIM

class Muslim {
public:
    virtual ~Muslim() = default;
    virtual void performMuslimRitual() const = 0;
};

#endif //CPPDESIGNPATTERNS_MUSLIM