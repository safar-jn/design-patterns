#ifndef DESIGN_PATTERNS_CACHEHANDLER_H
#define DESIGN_PATTERNS_CACHEHANDLER_H


#include "../implementations/Database.h"


class CacheHandler
{
    public:
        void setConnection (Database *conn);
        void cacheScore    (const std::string &clientID, const std::string &score);
        // ...
    private:
        Database *_conn = nullptr;
};


#endif //DESIGN_PATTERNS_CACHEHANDLER_H
