#include "FacebookCrawler.h"


void FacebookCrawler::update (const std::string &request)
{
    // react on update from producer (KafkaConsumer)
    _originalRequest = request;
    execute();
}

void FacebookCrawler::execute () const
{
    // simulate crawler execution
    std::cout << " |- [FacebookCrawler] | processing request '" << _originalRequest << "'" << std::endl;
}
