#include "src/ScrapingMediator.h"
#include "src/crawlers/GoogleCrawler.h"
#include "src/crawlers/WebsiteCrawler.h"


int main (int argc, char **argv)
{
    GoogleCrawler googleCrawler;
    WebsiteCrawler websiteCrawler;
    ScrapingMediator sm(&googleCrawler, &websiteCrawler);

    // trigger first crawler
    googleCrawler.execute("john+doe+praha+14000");

    return 0;
}
