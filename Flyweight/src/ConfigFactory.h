#ifndef DESIGN_PATTERNS_CONFIGFACTORY_H
#define DESIGN_PATTERNS_CONFIGFACTORY_H


#include <list>
#include <algorithm>

#include "Config.h"


class ConfigFactory
{
    public:
        Config& getConfig (uint16_t timeout, uint8_t retryCount,
                           const std::string &proxyHost, const std::string &proxyUser, const std::string &proxyPass);
    private:
        std::list<Config> _cache;
};


#endif //DESIGN_PATTERNS_CONFIGFACTORY_H
