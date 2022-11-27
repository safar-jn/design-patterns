#include "RetryDecorator.h"


RetryDecorator::RetryDecorator (std::shared_ptr<CrawlerInterface> crawler, uint8_t retry_count):
        CrawlerDecorator(crawler), _retry_count(retry_count)
{}

void RetryDecorator::execute ()
{
    /// simulate retry

    for (int i = 1; i <= _retry_count; i++)
    {
        std::cout << "[RetryDecorator] | try #" << i << std::endl;
        _crawler->execute();
    }


}

