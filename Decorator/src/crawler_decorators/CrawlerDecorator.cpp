#include "CrawlerDecorator.h"


CrawlerDecorator::CrawlerDecorator (std::shared_ptr<CrawlerInterface> crawler): _crawler(crawler)
{}

void CrawlerDecorator::execute ()
{
    _crawler->execute();
}
