#include "Config.h"


Config::Config (uint16_t timeout, uint8_t retryCount, std::string proxyHost, std::string proxyUser, std::string proxyPass):
    _timeout(timeout), _retry_count(retryCount), _proxy_host(std::move(proxyHost)), _proxy_user(std::move(proxyUser)), _proxy_pass(std::move(proxyPass))
{}

bool operator== (const Config &lhs, const Config &rhs)
{
    return lhs._timeout == rhs._timeout
            && lhs._retry_count == rhs._retry_count
            && lhs._proxy_host == rhs._proxy_host
            && lhs._proxy_user == rhs._proxy_user
            && lhs._proxy_pass == rhs._proxy_pass;
}

std::ostream& operator<< (std::ostream &os, const Config &conf)
{
    os  << "config={"
        << "timeout: " << (int) conf._timeout << ", "
        << "retryCount: " << (int) conf._retry_count << ", "
        << "proxyHost: " << conf._proxy_host << ", "
        << "proxyUser: " << conf._proxy_user << ", "
        << "proxyPass: " << conf._proxy_pass
        << "}";

    return os;
}
