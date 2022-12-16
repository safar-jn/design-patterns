#include "src/crawler_lib/CrawlerInterface.h"
#include "src/ProxyCrawler.h"

#include <list>


void runCrawler(CrawlerInterface *crawler)
{
    // simulate client (Crawler) code

    std::list<std::string> websites = {"website.com", "other-website.gov", "foo.org"};

    for (const auto &site : websites)
    {
        try
        {
            crawler->download(site);
        }
        catch (const std::runtime_error &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}


int main(int argc, char **argv)
{
    Crawler basicCrawler; // original object
    ProxyCrawler proxyCrawler; // original object wrapped in proxy

    runCrawler(&basicCrawler);
    runCrawler(&proxyCrawler);

    return 0;
}
