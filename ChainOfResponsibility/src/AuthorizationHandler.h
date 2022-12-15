#ifndef DESIGN_PATTERNS_AUTHORIZATIONHANDLER_H
#define DESIGN_PATTERNS_AUTHORIZATIONHANDLER_H


#include "BaseHandler.h"

#include <list>
#include <iostream>
#include <stdexcept>


/// one of the concrete handlers in CoR - simulates handling requests only from authorized sources
class AuthorizationHandler: public BaseHandler
{
    public:
        std::string handle (const std::string &request) override;
    private:
        static std::list<std::string> _WHITELIST_SYSTEMS; // dummy list of allowed systems - used for simulating auth
};


#endif //DESIGN_PATTERNS_AUTHORIZATIONHANDLER_H
