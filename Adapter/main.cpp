#include "src/old_library/OldDummyCrawler.h"
#include "src/NewToOldAdapter.h"
#include "src/ScraperExample.h"

#include <memory>


int main(int argc, char **argv)
{
    /// simulate scraper using old crawlers
	ScraperExample scraper_1;

    scraper_1.registerCrawler(std::make_shared<OldDummyCrawler>(), "some-website-1.com");
    scraper_1.registerCrawler(std::make_shared<OldDummyCrawler>(), "some-website-2.com");
    scraper_1.registerCrawler(std::make_shared<OldDummyCrawler>(), "some-website-3.com");

    scraper_1.run();

    /// simulate scraper using new crawlers
    ScraperExample scraper_2;

    scraper_2.registerCrawler(std::make_shared<NewToOldAdapter>(), "some-website-1.com");
    scraper_2.registerCrawler(std::make_shared<NewToOldAdapter>(), "some-website-2.com");
    scraper_2.registerCrawler(std::make_shared<NewToOldAdapter>(), "some-website-3.com");

    scraper_2.run();

	return 0;
}
