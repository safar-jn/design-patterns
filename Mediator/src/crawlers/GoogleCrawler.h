#ifndef DESIGN_PATTERNS_GOOGLECRAWLER_H
#define DESIGN_PATTERNS_GOOGLECRAWLER_H


#include "Crawler.h"

#include <string>
#include <iostream>


/// simulate concrete object (Crawler) that communicates with others via a mediator
class GoogleCrawler: public Crawler
{
    public:
        void        execute        (const std::string &searchQuery);
        std::string extractWebsite () const;
        // ...
};


#endif //DESIGN_PATTERNS_GOOGLECRAWLER_H
