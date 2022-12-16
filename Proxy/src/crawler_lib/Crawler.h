#ifndef DESIGN_PATTERNS_CRAWLER_H
#define DESIGN_PATTERNS_CRAWLER_H


#include "CrawlerInterface.h"

#include <list>
#include <iostream>


/// concrete implementation of original object (third-party Crawler)
class Crawler: public CrawlerInterface
{
    public:
        void download (const std::string &url) override;
};


#endif //DESIGN_PATTERNS_CRAWLER_H
