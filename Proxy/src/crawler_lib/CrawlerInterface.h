#ifndef DESIGN_PATTERNS_CRAWLERINTERFACE_H
#define DESIGN_PATTERNS_CRAWLERINTERFACE_H


#include <string>


/// common interface for original objects (Crawlers) that we want to wrap with proxy object
class CrawlerInterface
{
    public:
        virtual void download (const std::string &url) = 0;
};


#endif //DESIGN_PATTERNS_CRAWLERINTERFACE_H
