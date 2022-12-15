#ifndef DESIGN_PATTERNS_HANDLER_H
#define DESIGN_PATTERNS_HANDLER_H


#include <string>
#include <memory>


/// common interface for all handlers that are part of CoR
class Handler
{
    public:
        virtual std::shared_ptr<Handler> setNext (std::shared_ptr<Handler> handler) = 0;
        virtual std::string              handle  (const std::string &request) = 0;
};


#endif //DESIGN_PATTERNS_HANDLER_H
