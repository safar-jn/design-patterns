#include "TradeRegisterCrawler.h"


void TradeRegisterCrawler::update (const std::string &request)
{
    // react on update from producer (KafkaConsumer)
    _originalRequest = request;
    execute();
}

void TradeRegisterCrawler::execute () const
{
    // simulate crawler execution
    std::cout << " |- [TradeRegisterCrawler] | processing request '" << _originalRequest << "'" << std::endl;
}
