#include "BaseHandler.h"


Handler *BaseHandler::setNext (Handler *handler)
{
    _next_handler = handler;
    return handler;
}

std::string BaseHandler::handle (const std::string &request)
{
    return _next_handler ? _next_handler->handle(request) : "";
}
