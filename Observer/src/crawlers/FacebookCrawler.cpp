#include "FacebookCrawler.h"


void FacebookCrawler::update (const std::string &request)
{
    _original_request = request;
    execute();
}

void FacebookCrawler::execute () const
{
    /// simulate crawler execution
    std::cout << "[FacebookCrawler] | processing request '" << _original_request << "'" << std::endl;
}
