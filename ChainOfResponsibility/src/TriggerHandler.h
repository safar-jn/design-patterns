#ifndef DESIGN_PATTERNS_TRIGGERHANDLER_H
#define DESIGN_PATTERNS_TRIGGERHANDLER_H


#include "BaseHandler.h"

#include <iostream>


/// one of the concrete handlers in CoR - simulates triggering Scraper
class TriggerHandler: public BaseHandler
{
    public:
        std::string handle (const std::string &request) override;
};


#endif //DESIGN_PATTERNS_TRIGGERHANDLER_H
