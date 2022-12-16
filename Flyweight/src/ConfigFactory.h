#ifndef DESIGN_PATTERNS_CONFIGFACTORY_H
#define DESIGN_PATTERNS_CONFIGFACTORY_H


#include "Config.h"

#include <list>
#include <algorithm>


/// simulate factory that manages existing configurations
class ConfigFactory
{
    public:
        Config& getConfig (uint16_t timeout, uint8_t retryCount,
                           const std::string &proxyHost, const std::string &proxyUser, const std::string &proxyPass);
    private:
        std::list<Config> _cache;
};


#endif //DESIGN_PATTERNS_CONFIGFACTORY_H
