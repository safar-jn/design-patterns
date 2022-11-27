#include "ConfigFactory.h"


Config& ConfigFactory::getConfig (uint16_t timeout, uint8_t retryCount,
                                 const std::string &proxyHost, const std::string &proxyUser, const std::string &proxyPass)
{
    Config conf = {timeout, retryCount, proxyHost, proxyUser, proxyPass};
    auto flyweight = std::find(_cache.begin(), _cache.end(), conf);

    if (flyweight == _cache.end())
    {
        _cache.push_back(conf);
        flyweight = _cache.end();
        flyweight--;
    }

    return *flyweight;
}
