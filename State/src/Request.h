#ifndef DESIGN_PATTERNS_REQUEST_H
#define DESIGN_PATTERNS_REQUEST_H


#include "states/State.h"


class State; // forward declaration


/// stateful object that modifies its behaviour based on the state its in
///  - to be more precise the State object implements the different behaviours and this object just delegates
class Request
{
    public:
                        Request     ();
                       ~Request     ();
        void            changeState (State *state);
        void            process     ();
        // ...
        State* getState             () const;
    private:
        State *_state = nullptr;
};


#endif //DESIGN_PATTERNS_REQUEST_H
