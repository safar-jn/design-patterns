#include "NewDummyCrawler.h"


void NewDummyCrawler::execute (const std::string &website, uint16_t timeout, uint8_t retry_count)
{
    /// simulate crawling through a website

    std::cout << "[NewDummyCrawler] | acquire '" << website << "'" << std::endl;

    uint8_t retry_num = 0;

    while (_result.empty() && retry_num < retry_count)
    {
        _result = "<html>...</html>"; // simulate storing the acquired HTML
        retry_num++;
    }
}


std::string NewDummyCrawler::getResult () const
{
    return _result;
}
