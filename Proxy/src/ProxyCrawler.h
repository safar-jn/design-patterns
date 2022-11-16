#ifndef DESIGN_PATTERNS_PROXYCRAWLER_H
#define DESIGN_PATTERNS_PROXYCRAWLER_H


#include "crawler_lib/CrawlerInterface.h"
#include "crawler_lib/Crawler.h"

#include <memory>
#include <regex>


class ProxyCrawler: public CrawlerInterface
{
    public:
             ProxyCrawler ();
        void download     (const std::string &url) override;
    private:

        std::list<std::string>   _blacklist;
        std::shared_ptr<Crawler> _crawler {nullptr};
};


#endif //DESIGN_PATTERNS_PROXYCRAWLER_H
