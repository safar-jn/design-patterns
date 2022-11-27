#ifndef DESIGN_PATTERNS_REQUEST_H
#define DESIGN_PATTERNS_REQUEST_H


#include "states/State.h"

#include <memory>


class State;
class Request
{
    public:
             Request     ();
            ~Request     ();
        void changeState (State *state);
        void process     ();
        // ...
        State* getState  () const;
    private:
        State *_state = nullptr;
};


#endif //DESIGN_PATTERNS_REQUEST_H
