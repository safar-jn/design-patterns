#include <memory>
#include <iostream>

#include "src/Crawler.h"
#include "src/crawler_decorators/RetryDecorator.h"
#include "src/crawler_decorators/TimeoutDecorator.h"


int main(int argc, char **argv)
{
    auto crawler = std::make_shared<Crawler>("website.com");
    crawler->execute();

    std::cout << "---" << std::endl;

    auto timeoutCrawler = std::make_shared<TimeoutDecorator>(crawler, 100);
    timeoutCrawler->execute();

    std::cout << "---" << std::endl;

    auto retryCrawler = std::make_shared<RetryDecorator>(crawler, 3);
    retryCrawler->execute();

    std::cout << "---" << std::endl;

    auto timeoutRetryCrawler = std::make_shared<TimeoutDecorator>(retryCrawler, 100); // order matters
    timeoutRetryCrawler->execute();

    std::cout << "---" << std::endl;

    auto retryTimeoutCrawler = std::make_shared<RetryDecorator>(timeoutCrawler, 3); // order matters
    retryTimeoutCrawler->execute();

    return 0;
}
