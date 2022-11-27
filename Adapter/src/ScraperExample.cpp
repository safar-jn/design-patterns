#include "ScraperExample.h"


uint16_t ScraperExample::_TIMEOUT = 60;
uint8_t ScraperExample::_RETRY_COUNT = 3;

void ScraperExample::registerCrawler (std::shared_ptr<OldDummyCrawler> crawler, const std::string &website)
{
    crawler->setTimeout(ScraperExample::_TIMEOUT);
    crawler->setRetryCount(ScraperExample::_RETRY_COUNT);
    crawler->setWebsite(website);

    _crawlers.push_back(crawler);
}

void ScraperExample::run ()
{
    for (const auto &crawler : _crawlers)
        crawler->crawl();
}
