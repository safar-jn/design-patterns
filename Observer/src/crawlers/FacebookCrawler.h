#ifndef DESIGN_PATTERNS_FACEBOOKCRAWLER_H
#define DESIGN_PATTERNS_FACEBOOKCRAWLER_H


#include "Crawler.h"

#include <string>
#include <iostream>


/// concrete observer/subscriber - reacts on updates from producer in some way
class FacebookCrawler: public Crawler
{
    public:
        void update  (const std::string &request) override;
        void execute () const;
    private:
        std::string _originalRequest;
};


#endif //DESIGN_PATTERNS_FACEBOOKCRAWLER_H
