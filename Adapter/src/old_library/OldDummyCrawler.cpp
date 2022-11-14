#include "OldDummyCrawler.h"


void OldDummyCrawler::setTimeout (uint16_t timeout)
{
    _timeout = timeout;
}

void OldDummyCrawler::setRetryCount (uint8_t retry_count)
{
    _retry_count = retry_count;
}

void OldDummyCrawler::setWebsite (const std::string & website)
{
    _website = website;
}

std::string OldDummyCrawler::crawl ()
{
    /// simulate crawling through a website

    std::cout << "[OldDummyCrawler] | acquire '" << _website << "'" << std::endl;

    uint8_t retry_num = 0;
    std::string dummy_result;

    while (dummy_result.empty() && retry_num < _retry_count)
    {
        dummy_result = "<html>...</html>";
        retry_num++;
    }

    return dummy_result;
}
