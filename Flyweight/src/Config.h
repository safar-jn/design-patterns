#ifndef DESIGN_PATTERNS_CONFIG_H
#define DESIGN_PATTERNS_CONFIG_H


#include <string>
#include <ostream>


class Config
{
    public:
        Config(uint16_t timeout, uint8_t retryCount,
               const std::string &proxyHost, const std::string &proxyUser, const std::string &proxyPass);

        friend bool          operator== (const Config &lhs, const Config &rhs);
        friend std::ostream& operator<< (std::ostream &os, const Config &conf);
    private:
        uint16_t    _timeout;
        uint8_t     _retry_count;
        std::string _proxy_host;
        std::string _proxy_user;
        std::string _proxy_pass;
        // ...
};


#endif //DESIGN_PATTERNS_CONFIG_H
