#include "GoogleCrawler.h"


void GoogleCrawler::update (const std::string &request)
{
    _original_request = request;
    execute();
}

void GoogleCrawler::execute () const
{
    /// simulate crawler execution
    std::cout << "[GoogleCrawler] | processing request '" << _original_request << "'" << std::endl;
}
