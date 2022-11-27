#include "NewToOldAdapter.h"


NewToOldAdapter::NewToOldAdapter (): _crawler(std::make_shared<NewDummyCrawler>())
{}

std::string NewToOldAdapter::crawl ()
{
    _crawler->execute(_website, _timeout, _retry_count);
    return _crawler->getResult();
}
