#include "CrawlerDecorator.h"


CrawlerDecorator::CrawlerDecorator (std::shared_ptr<CrawlerInterface> crawler): _crawler(std::move(crawler))
{}

void CrawlerDecorator::execute ()
{
    // base decorator doesn't modify behaviour, only delegates to base object (Crawler)
    _crawler->execute();
}
