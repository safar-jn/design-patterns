#ifndef DESIGN_PATTERNS_CACHEHANDLER_H
#define DESIGN_PATTERNS_CACHEHANDLER_H


#include "BaseHandler.h"

#include <regex>
#include <iostream>
#include <unordered_map>


/// one of the concrete handlers in CoR - simulates searching for cached results for given request
class CacheHandler: public BaseHandler
{
    public:
        std::string handle (const std::string &request) override;
    private:
        static std::unordered_map<std::string, std::string> _CACHED_RESULTS; // simulate DB storage
};


#endif //DESIGN_PATTERNS_CACHEHANDLER_H
