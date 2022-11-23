#ifndef DESIGN_PATTERNS_CREATEDSTATE_H
#define DESIGN_PATTERNS_CREATEDSTATE_H


#include "State.h"

#include <iostream>


class CreatedState: public State
{
    public:
        void execute () override;
};


#endif //DESIGN_PATTERNS_CREATEDSTATE_H
