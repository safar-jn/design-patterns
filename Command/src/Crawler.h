#ifndef DESIGN_PATTERNS_CRAWLER_H
#define DESIGN_PATTERNS_CRAWLER_H


#include <list>
#include <string>
#include <iostream>
#include <algorithm>


class Crawler
{
    public:
        void setWebsite   (const std::string &website);
        void shallowCrawl ();
        void deepCrawl    (uint8_t depth);
    private:
        void download (const std::string &url);

        std::string _website;
};


#endif //DESIGN_PATTERNS_CRAWLER_H
