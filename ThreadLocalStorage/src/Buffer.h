#ifndef DESIGN_PATTERNS_BUFFER_H
#define DESIGN_PATTERNS_BUFFER_H


#include <list>
#include <string>


/// buffer for logging messages - acts as a TLS (global access, but thread-specific memory)
///  - uses C++ way of defining TLS (i.e. "thread_local" keyword)
class Buffer
{
    public:
        static thread_local Buffer INSTANCE; // TLS buffer - each thread will have its own instance

        void        insert    (const std::string &msg);
        std::string stringify ();
    private:
        std::list<std::string> _storage;
};


#endif //DESIGN_PATTERNS_BUFFER_H
