#ifndef DESIGN_PATTERNS_STATE_H
#define DESIGN_PATTERNS_STATE_H


#include "../Request.h"


class Request; // forward declaration


/// common interfaces for all State objects
class State
{
    public:
        virtual     ~State      ();
                void setRequest (Request *request);
        virtual void execute    () = 0; // for implementing different behaviours in subclasses
    protected:
        Request *_request = nullptr; // reference to stateful object - so States can initiate state change by themselves
};


#endif //DESIGN_PATTERNS_STATE_H
