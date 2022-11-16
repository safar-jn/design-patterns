#include "src/crawler_lib/CrawlerInterface.h"
#include "src/ProxyCrawler.h"

#include <list>
#include <regex>
#include <memory>


/// simulate client code
void run_crawler(std::shared_ptr<CrawlerInterface> crawler)
{
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
    run_crawler(std::make_shared<Crawler>());
    run_crawler(std::make_shared<ProxyCrawler>());

    return 0;
}
