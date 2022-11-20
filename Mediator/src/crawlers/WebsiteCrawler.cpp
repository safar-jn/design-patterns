#include "WebsiteCrawler.h"


void WebsiteCrawler::setMediator (Mediator *mediator)
{
    _meadiator = mediator;
}

void WebsiteCrawler::execute (const std::string &url)
{
    /// simulate downloading website whose url was acquired by GoogleCrawler
    std::cout << "[WebsiteCrawler] | downloading '" << url << "'" << std::endl;
    _meadiator->mediate(this);
}
