#ifndef DESIGN_PATTERNS_SCRAPERCORE_H
#define DESIGN_PATTERNS_SCRAPERCORE_H


#include "Crawler.h"

#include <map>
#include <list>
#include <string>
#include <iostream>


/// MASTER - drives the scraping process, but lets crawlers (i.e. slaves) do the bulk of the work
class ScraperCore
{
    public:
        std::list<std::string> scrapeClient (const std::string &clientName, const std::string &clientSurname);
    private:
        void                   scrapeSearchEngines    (const std::string &clientName, const std::string &clientSurname);
        void                   scrapePersonalWebsite  (const std::string &website);
        std::list<std::string> collectResults         (const std::string &clientName, const std::string &clientSurname);

        std::map<std::string, std::list<Crawler*>> _slaves;
};


#endif //DESIGN_PATTERNS_SCRAPERCORE_H
