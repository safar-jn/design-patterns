#include "src/Crawler.h"
#include "src/crawler_decorators/RetryDecorator.h"
#include "src/crawler_decorators/TimeoutDecorator.h"

#include <memory>
#include <iostream>


int main(int argc, char **argv)
{
    // simulate usage of decorators (most importantly different ways of stacking them)

    auto crawler = std::make_shared<Crawler>("website.com");
    crawler->execute(); // only crawl

    std::cout << "---" << std::endl;

    auto timeoutCrawler = std::make_shared<TimeoutDecorator>(crawler, 100);
    timeoutCrawler->execute(); // crawl with 100ms timeout

    std::cout << "---" << std::endl;

    auto retryCrawler = std::make_shared<RetryDecorator>(crawler, 3);
    retryCrawler->execute(); // crawl with 3 retries

    std::cout << "---" << std::endl;

    auto timeoutRetryCrawler = std::make_shared<TimeoutDecorator>(retryCrawler, 100); // order matters
    timeoutRetryCrawler->execute(); // crawl with 100ms timeout followed by 3 retries

    std::cout << "---" << std::endl;

    auto retryTimeoutCrawler = std::make_shared<RetryDecorator>(timeoutCrawler, 3); // order matters
    retryTimeoutCrawler->execute(); // crawl with 3 retries with each having 100ms timeout

    return 0;
}
