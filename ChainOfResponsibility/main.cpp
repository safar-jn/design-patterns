#include <memory>
#include <iostream>

#include "src/Handler.h"
#include "src/AuthorizationHandler.h"
#include "src/CacheHandler.h"
#include "src/TriggerHandler.h"


std::string create_dummy_request (const std::string &sourceSystem, const std::string &clientID)
{
    return  "<ScoringRequest>"
                "<metadata>"
                    "<timestamp>1970-01-01 00:00:00</timestamp>"
                    "<sourceSystem>" + sourceSystem + "</sourceSystem>"
                "<metadata>"
                "<payload>"
                    "<clientID>" + clientID + "</clientID>"
                    "<name>John</name>"
                    "<surname>Doe</surname>"
                "</payload>"
            "</ScoringRequest>";
}


int main(int argc, char **argv)
{
    std::list<std::string> dummy_requests =
            {
                    create_dummy_request("SYSTEM_2", "CLIENT_ID_1"), // unauthorized system
                    create_dummy_request("SYSTEM_3", "CLIENT_ID_1"), // authorized system; cached result
                    create_dummy_request("SYSTEM_3", "CLIENT_ID_9")  // authorized system; uncached result
            };

    // ---

    std::shared_ptr<Handler> handler_1 = std::make_shared<AuthorizationHandler>();
    std::shared_ptr<Handler> handler_2 = std::make_shared<CacheHandler>();
    std::shared_ptr<Handler> handler_3 = std::make_shared<TriggerHandler>();

    handler_1->setNext(handler_2.get())->setNext(handler_3.get());

    /// simulate processing several requests
    for (const auto &req: dummy_requests)
    {
        try
        {
            std::cout << handler_1->handle(req) << std::endl;
        }
        catch (const std::runtime_error &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

	return 0;
}
