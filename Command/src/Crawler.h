#ifndef DESIGN_PATTERNS_CRAWLER_H
#define DESIGN_PATTERNS_CRAWLER_H


#include <list>
#include <string>
#include <utility>
#include <iostream>
#include <algorithm>


/// simulate web crawler (i.e. some of its functions like crawling through specific websites)
class Crawler
{
    public:
        void setWebsite   (std::string website);
        void shallowCrawl ();
        void deepCrawl    (uint8_t depth);
        // ...
    private:
        void _download    (const std::string &url);
        // ...
        std::string _website;
};


#endif //DESIGN_PATTERNS_CRAWLER_H
