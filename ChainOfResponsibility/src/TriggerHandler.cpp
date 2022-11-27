#include "TriggerHandler.h"


std::string TriggerHandler::handle (const std::string &request)
{
    /// simulate invoking the Scraper (i.e. posting to Kafka) and rest of the process
    return "request successfully processed and passed on to the Scraper";
}
