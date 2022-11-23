#ifndef DESIGN_PATTERNS_STATE_H
#define DESIGN_PATTERNS_STATE_H


#include "../Request.h"


class Request;
class State
{
    public:
        virtual     ~State      ();
                void setRequest (Request *request);
        virtual void execute    () = 0;
    protected:
        Request *_request = nullptr;
};


#endif //DESIGN_PATTERNS_STATE_H
