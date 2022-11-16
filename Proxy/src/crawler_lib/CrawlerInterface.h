#ifndef DESIGN_PATTERNS_CRAWLERINTERFACE_H
#define DESIGN_PATTERNS_CRAWLERINTERFACE_H


#include <string>


class CrawlerInterface
{
    public:
        virtual void download (const std::string &url) = 0;
};


#endif //DESIGN_PATTERNS_CRAWLERINTERFACE_H
