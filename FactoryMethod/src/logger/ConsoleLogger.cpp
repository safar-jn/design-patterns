#include "ConsoleLogger.h"
#include "../storage/ConsoleStorage.h"


void ConsoleLogger::createStorage ()
{
    _storage = std::make_shared<ConsoleStorage>();
}
