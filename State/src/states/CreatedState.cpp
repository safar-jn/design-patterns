#include "CreatedState.h"
#include "ExecutingState.h"


void CreatedState::execute ()
{
    /// simulate passing the request from Req.Handler to Scraper (through Kafka)
    std::cout << "[CreatedState] | triggering Scraper and subsequently rest of the process" << std::endl;

    _request->changeState(new ExecutingState);

}
