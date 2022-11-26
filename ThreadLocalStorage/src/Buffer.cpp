#include "Buffer.h"


thread_local Buffer Buffer::INSTANCE = Buffer();

void Buffer::insert (const std::string &msg)
{
    _storage.push_back(msg);
}

std::string Buffer::stringify ()
{
    std::string buffer;

    for (const auto &msg : _storage)
        buffer += (msg + "\n");

    return buffer;
}
