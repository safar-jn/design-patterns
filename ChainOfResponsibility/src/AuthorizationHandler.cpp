#include "AuthorizationHandler.h"


std::list<std::string> AuthorizationHandler::_WHITELIST_SYSTEMS = {"SYSTEM_1", "SYSTEM_3", "SYSTEM_7"};

std::string AuthorizationHandler::handle (const std::string &request)
{
    for (const auto &system : _WHITELIST_SYSTEMS)
        if (request.find(system) != std::string::npos)
            return BaseHandler::handle(request);

    throw std::runtime_error("source system isn't authorized for this service");
}
