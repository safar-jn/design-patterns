#include "Request.h"
#include "states/CreatedState.h"


Request::Request ()
{
    // all new request start in CreatedState
    changeState(new CreatedState);
}

Request::~Request ()
{
    delete _state;
}

void Request::changeState (State *state)
{
    delete _state;
    _state = state;
    _state->setRequest(this);
}

void Request::process ()
{
    // delegate the actual work to State object (different behaviour based on type of State)
    _state->execute();
}

State* Request::getState () const
{
    return _state;
}
