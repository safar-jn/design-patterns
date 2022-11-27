#include "ShallowScrapeCommand.h"


ShallowScrapeCommand::ShallowScrapeCommand (Crawler *crawler, const std::string &website):
    _crawler(crawler), _website(website)
{}

void ShallowScrapeCommand::execute ()
{
    _crawler->setWebsite(_website);
    _crawler->shallowCrawl();
}
