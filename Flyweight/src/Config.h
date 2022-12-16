#ifndef DESIGN_PATTERNS_CONFIG_H
#define DESIGN_PATTERNS_CONFIG_H


#include <string>
#include <utility>
#include <ostream>


/// simulate share-able data (i.e. Flyweight object) - Crawlers with same config won't create new objects
class Config
{
        friend bool          operator== (const Config &lhs, const Config &rhs);
        friend std::ostream& operator<< (std::ostream &os, const Config &conf);
    public:
        Config(uint16_t timeout, uint8_t retryCount,
               std::string proxyHost, std::string proxyUser, std::string proxyPass);
    private:
        uint16_t    _timeout;
        uint8_t     _retry_count;
        std::string _proxy_host;
        std::string _proxy_user;
        std::string _proxy_pass;
        // ...
};


#endif //DESIGN_PATTERNS_CONFIG_H
