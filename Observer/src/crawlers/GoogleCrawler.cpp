#include "GoogleCrawler.h"


void GoogleCrawler::update (const std::string &request)
{
    // react on update from producer (KafkaConsumer)
    _originalRequest = request;
    execute();
}

void GoogleCrawler::execute () const
{
    // simulate crawler execution
    std::cout << " |- [GoogleCrawler] | processing request '" << _originalRequest << "'" << std::endl;
}
