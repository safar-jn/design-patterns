#include "BaseHandler.h"


std::shared_ptr<Handler> BaseHandler::setNext (std::shared_ptr<Handler> handler)
{
    // set next handler in chain
    _next_handler = std::move(handler);
    return _next_handler;
}

std::string BaseHandler::handle (const std::string &request)
{
    // pass the request to next handler in chain
    return _next_handler ? _next_handler->handle(request) : "";
}
