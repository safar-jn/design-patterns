#include "WebsiteCrawler.h"


void WebsiteCrawler::execute (const std::string &url)
{
    // simulate crawling through a personal website
    //  - its URL is acquired by GoogleCrawler

    std::cout << "[WebsiteCrawler] | downloading '" << url << "'" << std::endl;
    _meadiator->mediate(this); // notify mediator
}
