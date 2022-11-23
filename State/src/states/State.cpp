#include "State.h"


State::~State ()
{}

void State::setRequest (Request *request)
{
    _request = request;
}
