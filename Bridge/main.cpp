#include "src/abstractions/CacheHandler.h"
#include "src/implementations/OracleDatabase.h"
#include "src/implementations/PostgresDatabase.h"


void simulateClient (CacheHandler *ch)
{
    // ...
    ch->cacheScore("client_id_1", "56.78");
    // ...
}


int main (int argc, char **argv)
{
    auto oracleConn = new OracleDatabase;
    auto postgresConn = new PostgresDatabase;
    auto cacheHandler = new CacheHandler;

    // --------------------------------------------

    cacheHandler->setConnection(oracleConn);
    simulateClient(cacheHandler);

    // ---

    cacheHandler->setConnection(postgresConn);
    simulateClient(cacheHandler);

    // --------------------------------------------

    delete oracleConn;
    delete postgresConn;
    delete cacheHandler;

    return 0;
}
