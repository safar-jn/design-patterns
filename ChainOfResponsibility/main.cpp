#include "src/AuthorizationHandler.h"
#include "src/CacheHandler.h"
#include "src/TriggerHandler.h"

#include <memory>
#include <iostream>


std::string createDummyRequest (const std::string &sourceSystem, const std::string &clientID)
{
    // simulate creating dummy requests that are then processed by CoR
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
    // simulate dummy requests with different properties (i.e. each one will produce different result)
    std::list<std::string> dummyRequests =
            {
                    createDummyRequest("SYSTEM_2", "CLIENT_ID_1"), // unauthorized system
                    createDummyRequest("SYSTEM_3", "CLIENT_ID_1"), // authorized system; cached result
                    createDummyRequest("SYSTEM_3", "CLIENT_ID_9")  // authorized system; uncached result
            };

    // ---

    // create individual handlers
    auto handler_1 = std::make_shared<AuthorizationHandler>();
    auto handler_2 = std::make_shared<CacheHandler>();
    auto handler_3 = std::make_shared<TriggerHandler>();

    // link handlers into a chain (CoR)
    handler_1->setNext(handler_2)->setNext(handler_3);

    // simulate processing several requests - just pass it to the first handler in chain
    for (const auto &req: dummyRequests)
    {
        try
        {
            auto res = handler_1->handle(req);

            if (!res.empty())
            {
                std::cout << " |- " << res << "\n"
                          << " |- <<TERMINATING CoR>>" << std::endl;
            }
        }
        catch (const std::runtime_error &e)
        {
            std::cerr << " |- " << e.what() << "\n"
                      << " |- <<TERMINATING CoR>>" << std::endl;
        }

        std::cout << "---" << std::endl;
    }

	return 0;
}
