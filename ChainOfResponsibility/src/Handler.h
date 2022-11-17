#ifndef DESIGN_PATTERNS_HANDLER_H
#define DESIGN_PATTERNS_HANDLER_H


#include <string>


class Handler
{
    public:
        virtual Handler*    setNext (Handler *handler) = 0;
        virtual std::string handle  (const std::string &request) = 0;
};


#endif //DESIGN_PATTERNS_HANDLER_H
