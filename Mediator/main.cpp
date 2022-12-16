#include "src/ScrapingMediator.h"
#include "src/crawlers/GoogleCrawler.h"
#include "src/crawlers/WebsiteCrawler.h"


int main (int argc, char **argv)
{
    // setup mediator and individual objects (that communicate with each other through a mediator)
    GoogleCrawler googleCrawler;
    WebsiteCrawler websiteCrawler;
    ScrapingMediator sm(&googleCrawler, &websiteCrawler);

    // trigger first crawler
    googleCrawler.execute("john+doe+praha+14000");

    return 0;
}
