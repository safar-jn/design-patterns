#include "OracleDatabase.h"


void OracleDatabase::createConnection (const std::string &uri, const std::string &usr, const std::string &pwd)
{
    /// simulate connecting to Oracle DB
    std::cout   << "[OracleDatabase] | connecting to Oracle DB '"
                << uri
                << "' using '"
                << usr << ":"
                << pwd
                << "'"
                << std::endl;
}

std::string OracleDatabase::selectScore (const std::string &clientID)
{
    /// simulate selecting cached result from Oracle DB
    std::cout   << "[OracleDatabase] | executing 'select ... where clientID="
                << clientID
                << ";' in Oracle DB"
                << std::endl;

    srand(time(0));
    return (rand() % 100 < 50) ? "" : "12.34";
}

void OracleDatabase::updateScore (const std::string &clientID, const std::string &score)
{
    /// simulate updating cached result in Oracle DB
    std::cout   << "[OracleDatabase] | executing 'update set score="
                << score
                << " where clientID="
                << clientID
                << ";' in Oracle DB"
                << std::endl;
}

void OracleDatabase::insertScore (const std::string &clientID, const std::string &score)
{
    /// simulate inserting new result in Oracle DB
    std::cout   << "[OracleDatabase] | executing 'insert into cache values ("
                << clientID
                << ", "
                << score
                << ", ...);"
                << std::endl;
}
