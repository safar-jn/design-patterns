#ifndef DESIGN_PATTERNS_FINISHEDSTATE_H
#define DESIGN_PATTERNS_FINISHEDSTATE_H


#include "State.h"

#include <iostream>


class FinishedState: public State
{
    public:
        void execute () override;
};


#endif //DESIGN_PATTERNS_FINISHEDSTATE_H
