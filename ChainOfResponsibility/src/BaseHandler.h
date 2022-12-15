#ifndef DESIGN_PATTERNS_BASEHANDLER_H
#define DESIGN_PATTERNS_BASEHANDLER_H


#include "Handler.h"

#include <string>
#include <memory>


/// base for all handlers in CoR - implements common logic for passing requests down the chain
class BaseHandler: public Handler
{
    public:
        std::shared_ptr<Handler> setNext (std::shared_ptr<Handler> handler) override;
        std::string              handle  (const std::string &request) override;
    private:
        std::shared_ptr<Handler> _next_handler {nullptr};
};


#endif //DESIGN_PATTERNS_BASEHANDLER_H
