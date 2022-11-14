#include "TimeoutDecorator.h"


TimeoutDecorator::TimeoutDecorator (std::shared_ptr<CrawlerInterface> crawler, uint16_t timeout):
    CrawlerDecorator(crawler), _timeout(timeout)
{}

void TimeoutDecorator::execute ()
{
    /// simulate timeout

    std::cout << "[TimeoutDecorator] | " << _timeout << "ms timeout" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(_timeout));

    _crawler->execute();
}
