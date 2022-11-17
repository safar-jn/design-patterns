#ifndef DESIGN_PATTERNS_BASEHANDLER_H
#define DESIGN_PATTERNS_BASEHANDLER_H


#include "Handler.h"


class BaseHandler: public Handler
{
    public:
        Handler*    setNext (Handler *handler) override;
        std::string handle  (const std::string &request) override;
    private:
        Handler *_next_handler = nullptr;
};


#endif //DESIGN_PATTERNS_BASEHANDLER_H
