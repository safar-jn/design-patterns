#include "src/Request.h"
#include "src/states/ExecutingState.h"

#include <thread>


int main (int argc, char **argv)
{
    Request request;

    /// after creation the Request object is in CreatedState and process() triggers the execution
    request.process();

    /// then the Request object goes to ExecutionState and process() just waits until the result is ready
    while (dynamic_cast<ExecutingState*>(request.getState()))
    {
        request.process();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    /// finally the Request object switches to FinishedState where process() retrieves final result
    request.process();

    return 0;
}
