#ifndef DESIGN_PATTERNS_CRAWLER_H
#define DESIGN_PATTERNS_CRAWLER_H


#include "Config.h"
#include "ConfigFactory.h"

#include <string>
#include <memory>
#include <utility>
#include <iostream>


/// simulate objects that share some part of the their properties (i.e. multiple Crawlers share the exact same Config)
class Crawler
{
    public:
             Crawler    (std::string website, ConfigFactory *confFactory);
        void configure  (uint16_t timeout, uint8_t retryCount,
                         const std::string &proxyHost, const std::string &proxyUser, const std::string &proxyPass);
        void crawl      () const;
    private:
        std::string    _website;
        Config        *_config      = nullptr;
        ConfigFactory *_confFactory = nullptr;
};


#endif //DESIGN_PATTERNS_CRAWLER_H
