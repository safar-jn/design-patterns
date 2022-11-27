#ifndef DESIGN_PATTERNS_GOOGLECRAWLER_H
#define DESIGN_PATTERNS_GOOGLECRAWLER_H


#include "Crawler.h"

#include <string>
#include <iostream>


class GoogleCrawler: public Crawler
{
    public:
        void        setMediator    (Mediator *mediator) override;
        void        execute        (const std::string &searchQuery);
        std::string extractWebsite () const;
        // ...
};


#endif //DESIGN_PATTERNS_GOOGLECRAWLER_H
