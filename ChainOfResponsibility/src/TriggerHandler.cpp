#include "TriggerHandler.h"


std::string TriggerHandler::handle (const std::string &request)
{
    // simulate invoking the Scraper (i.e. posting to Kafka) and rest of the process
    std::cout << "[TriggerHandler] | posting trigger command to Kafka" << std::endl;
    return "request successfully processed and passed on to the Scraper";
}
