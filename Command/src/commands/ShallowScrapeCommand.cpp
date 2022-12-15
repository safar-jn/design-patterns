#include "ShallowScrapeCommand.h"


ShallowScrapeCommand::ShallowScrapeCommand (std::shared_ptr<Crawler> crawler, std::string website):
    _crawler(std::move(crawler)), _website(std::move(website))
{}

void ShallowScrapeCommand::execute ()
{
    _crawler->setWebsite(_website);
    _crawler->shallowCrawl();
}
