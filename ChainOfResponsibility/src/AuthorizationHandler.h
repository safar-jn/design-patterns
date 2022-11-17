#ifndef DESIGN_PATTERNS_AUTHORIZATIONHANDLER_H
#define DESIGN_PATTERNS_AUTHORIZATIONHANDLER_H


#include "BaseHandler.h"

#include <list>
#include <stdexcept>


class AuthorizationHandler: public BaseHandler
{
    public:
        std::string handle (const std::string &request) override;
    private:
        static std::list<std::string> _WHITELIST_SYSTEMS;
};


#endif //DESIGN_PATTERNS_AUTHORIZATIONHANDLER_H
