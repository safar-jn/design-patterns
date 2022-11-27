#ifndef DESIGN_PATTERNS_SCRAPEREXAMPLE_H
#define DESIGN_PATTERNS_SCRAPEREXAMPLE_H


#include <list>
#include <memory>

#include "old_library/OldDummyCrawler.h"


/// simulate the scraper (client) that is hardcoded to use old crawlers
class ScraperExample
{
    public:
        void registerCrawler (std::shared_ptr<OldDummyCrawler> crawler, const std::string &website);
        void run ();
    private:
        std::list<std::shared_ptr<OldDummyCrawler>> _crawlers;

        static uint16_t _TIMEOUT;
        static uint8_t  _RETRY_COUNT;
};


#endif //DESIGN_PATTERNS_SCRAPEREXAMPLE_H
