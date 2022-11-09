#include "FileLogger.h"
#include "../storage/FileStorage.h"


void FileLogger::createStorage ()
{
    _storage = std::make_shared<FileStorage>("temp.log");
}
