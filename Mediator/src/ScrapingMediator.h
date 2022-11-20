#ifndef DESIGN_PATTERNS_SCRAPINGMEDIATOR_H
#define DESIGN_PATTERNS_SCRAPINGMEDIATOR_H


#include "Mediator.h"
#include "crawlers/GoogleCrawler.h"
#include "crawlers/WebsiteCrawler.h"


class ScrapingMediator: public Mediator
{
    public:
             ScrapingMediator (GoogleCrawler *googleCrawler, WebsiteCrawler *websiteCrawler);
        void mediate          (Crawler *source) const override;
    private:
        void resolveGoogleCrawler  (Crawler *crawler) const;
        void resolveWebsiteCrawler (Crawler *crawler) const;

        GoogleCrawler  *_google_crawler = nullptr;
        WebsiteCrawler *_website_crawler = nullptr;
};


#endif //DESIGN_PATTERNS_SCRAPINGMEDIATOR_H
