#ifndef DESIGN_PATTERNS_FACEBOOKCRAWLER_H
#define DESIGN_PATTERNS_FACEBOOKCRAWLER_H


#include "Crawler.h"

#include <string>
#include <iostream>


class FacebookCrawler: public Crawler
{
    public:
        void update  (const std::string &request) override;
        void execute () const;
    private:
        std::string _original_request;
};


#endif //DESIGN_PATTERNS_FACEBOOKCRAWLER_H
