#include "DeepScrapeCommand.h"


DeepScrapeCommand::DeepScrapeCommand (std::shared_ptr<Crawler> crawler, std::string website, uint8_t depth):
    _crawler(std::move(crawler)), _website(std::move(website)), _depth(depth)
{}

void DeepScrapeCommand::execute ()
{
    _crawler->setWebsite(_website);
    _crawler->deepCrawl(_depth);
}
