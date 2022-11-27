#ifndef DESIGN_PATTERNS_TRIGGERHANDLER_H
#define DESIGN_PATTERNS_TRIGGERHANDLER_H


#include "BaseHandler.h"


class TriggerHandler: public BaseHandler
{
    public:
        std::string handle (const std::string &request) override;
};


#endif //DESIGN_PATTERNS_TRIGGERHANDLER_H
