#ifndef DESIGN_PATTERNS_SCRAPINGMEDIATOR_H
#define DESIGN_PATTERNS_SCRAPINGMEDIATOR_H


#include "Mediator.h"
#include "crawlers/GoogleCrawler.h"
#include "crawlers/WebsiteCrawler.h"


/// simulate concrete mediator implementation that specifies how Crawlers communicate with each other
/// - in given example after Google gets scraped, it extracts URL of a personal websites and passes it to the WebsiteCrawler
class ScrapingMediator: public Mediator
{
    public:
             ScrapingMediator (GoogleCrawler *googleCrawler, WebsiteCrawler *websiteCrawler);
        void mediate          (Crawler *source) const override;
    private:
        void resolveGoogleCrawler  (Crawler *crawler) const; // how to react on notification from GoogleCrawler
        void resolveWebsiteCrawler (Crawler *crawler) const; // how to react on notification from WebsiteCrawler

        GoogleCrawler  *_google_crawler = nullptr;
        WebsiteCrawler *_website_crawler = nullptr;
};


#endif //DESIGN_PATTERNS_SCRAPINGMEDIATOR_H
