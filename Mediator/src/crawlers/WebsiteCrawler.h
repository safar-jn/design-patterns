#ifndef DESIGN_PATTERNS_WEBSITECRAWLER_H
#define DESIGN_PATTERNS_WEBSITECRAWLER_H


#include "Crawler.h"

#include <string>
#include <iostream>


/// simulate concrete object (Crawler) that communicates with others via a mediator
class WebsiteCrawler: public Crawler
{
    public:
        void execute (const std::string &url);
        // ...
};


#endif //DESIGN_PATTERNS_WEBSITECRAWLER_H
