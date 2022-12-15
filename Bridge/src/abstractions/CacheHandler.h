#ifndef DESIGN_PATTERNS_CACHEHANDLER_H
#define DESIGN_PATTERNS_CACHEHANDLER_H


#include "../implementations/Database.h"

#include <memory>


class CacheHandler
{
    public:
        void setConnection (std::shared_ptr<Database> conn);
        void cacheScore    (const std::string &clientID, const std::string &score);
        // ...
    private:
        std::shared_ptr<Database> _conn {nullptr};
};


#endif //DESIGN_PATTERNS_CACHEHANDLER_H
