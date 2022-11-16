#include "FileStorage.h"


FileStorage::FileStorage (const std::string &fileName): _file(std::make_shared<std::ofstream>())
{
    _file->open(fileName);
}

FileStorage::~FileStorage ()
{
    _file->close();
}

void FileStorage::write (const std::string &msg)
{
    (*_file) << msg << "\n";
}
