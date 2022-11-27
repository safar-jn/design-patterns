#include "ScrapingMediator.h"


ScrapingMediator::ScrapingMediator (GoogleCrawler *googleCrawler, WebsiteCrawler *websiteCrawler):
    _google_crawler(googleCrawler), _website_crawler(websiteCrawler)
{
    googleCrawler->setMediator(this);
    websiteCrawler->setMediator(this);
}

void ScrapingMediator::mediate (Crawler *source) const
{
    if (source == _google_crawler)
    {
        resolveGoogleCrawler(source);
    }
    else if (source == _website_crawler)
    {
        resolveWebsiteCrawler(source);
    }
    else
    {
        std::cerr << "[ScrapingMediator] | unknown source" << std::endl;
    }
}

void ScrapingMediator::resolveGoogleCrawler (Crawler *crawler) const
{
    std::cout << "[ScrapingMediator] | received notification from GoogleCrawler\n"
              << " |- triggering WebsiteCrawler" << std::endl;

    std::string url = _google_crawler->extractWebsite();
    _website_crawler->execute(url);
}

void ScrapingMediator::resolveWebsiteCrawler (Crawler *crawler) const
{
    std::cout << "[ScrapingMediator] | received notification from WebsiteCrawler\n"
              << " |- nothing to do..." << std::endl;
}
