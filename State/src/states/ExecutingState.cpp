#include "ExecutingState.h"
#include "FinishedState.h"


void ExecutingState::execute ()
{
    /// simulate waiting for the whole scoring process to finish (i.e. Scraper -> Transformer -> Modeler)

    auto now = std::chrono::high_resolution_clock::now();

    if (std::chrono::duration<double, std::milli>(now - _start).count() <= 1000)
    {
        std::cout << "[ExecutingState] | waiting for the process to finish" << std::endl;
    }
    else
    {
        std::cout << "[ExecutingState] | process finished" << std::endl;
        _request->changeState(new FinishedState);
    }
}
