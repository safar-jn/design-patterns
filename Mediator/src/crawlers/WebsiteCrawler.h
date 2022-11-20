#ifndef DESIGN_PATTERNS_WEBSITECRAWLER_H
#define DESIGN_PATTERNS_WEBSITECRAWLER_H


#include "Crawler.h"

#include <string>
#include <iostream>


class WebsiteCrawler: public Crawler
{
    public:
        void setMediator    (Mediator *mediator) override;
        void execute        (const std::string &url);
};


#endif //DESIGN_PATTERNS_WEBSITECRAWLER_H
