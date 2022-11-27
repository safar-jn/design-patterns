#ifndef DESIGN_PATTERNS_CRAWLER_H
#define DESIGN_PATTERNS_CRAWLER_H


#include <string>
#include <iostream>

#include "Config.h"
#include "ConfigFactory.h"


class Crawler
{
    public:
             Crawler    (const std::string &website, ConfigFactory *confFactory);
        void configure  (uint16_t timeout, uint8_t retryCount,
                         const std::string &proxyHost, const std::string &proxyUser, const std::string &proxyPass)  ;
        void crawl      () const;
    private:
        std::string     _website;

        ConfigFactory   *_conf_factory;
        Config          *_config = nullptr;
};


#endif //DESIGN_PATTERNS_CRAWLER_H
