#ifndef DESIGN_PATTERNS_GOOGLECRAWLER_H
#define DESIGN_PATTERNS_GOOGLECRAWLER_H


#include "Crawler.h"

#include <string>
#include <iostream>


class GoogleCrawler: public Crawler
{
    public:
        void update  (const std::string &request) override;
        void execute () const;
    private:
        std::string _original_request;
};


#endif //DESIGN_PATTERNS_GOOGLECRAWLER_H
