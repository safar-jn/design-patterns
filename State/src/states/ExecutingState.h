#ifndef DESIGN_PATTERNS_EXECUTINGSTATE_H
#define DESIGN_PATTERNS_EXECUTINGSTATE_H


#include "State.h"

#include <chrono>
#include <iostream>


/// one of concrete states
class ExecutingState: public State
{
    public:
        void execute () override;
    private:
        std::chrono::time_point<std::chrono::high_resolution_clock> _start = std::chrono::high_resolution_clock::now();
};


#endif //DESIGN_PATTERNS_EXECUTINGSTATE_H
