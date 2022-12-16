#ifndef DESIGN_PATTERNS_PROXYCRAWLER_H
#define DESIGN_PATTERNS_PROXYCRAWLER_H


#include "crawler_lib/CrawlerInterface.h"
#include "crawler_lib/Crawler.h"

#include <memory>
#include <regex>


/// Proxy object
///   - wraps the original object (Crawler) and provides some pre/post-processing (in this case blacklist)
///   - the original functionality is still done by the original object it wraps around
class ProxyCrawler: public CrawlerInterface
{
    public:
             ProxyCrawler ();
        void download     (const std::string &url) override;
    private:
        std::list<std::string>   _blacklist;
        std::shared_ptr<Crawler> _crawler {nullptr}; // pointer to the actual original object
};


#endif //DESIGN_PATTERNS_PROXYCRAWLER_H
