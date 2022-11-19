#include "DeepScrapeCommand.h"


DeepScrapeCommand::DeepScrapeCommand (Crawler *crawler, const std::string &website, uint8_t depth):
    _crawler(crawler), _website(website), _depth(depth)
{}

void DeepScrapeCommand::execute ()
{
    _crawler->setWebsite(_website);
    _crawler->deepCrawl(_depth);
}
