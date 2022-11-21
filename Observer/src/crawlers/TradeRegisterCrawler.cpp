#include "TradeRegisterCrawler.h"


void TradeRegisterCrawler::update (const std::string &request)
{
    _original_request = request;
    execute();
}

void TradeRegisterCrawler::execute () const
{
    /// simulate crawler execution
    std::cout << "[TradeRegisterCrawler] | processing request '" << _original_request << "'" << std::endl;
}
