#include "Request.h"
#include "states/CreatedState.h"


Request::Request ()
{
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
    _state->execute();
}

State *Request::getState () const
{
    return _state;
}
