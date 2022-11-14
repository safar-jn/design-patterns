#ifndef DESIGN_PATTERNS_NEWTOOLDADAPTER_H
#define DESIGN_PATTERNS_NEWTOOLDADAPTER_H


#include "old_library/OldDummyCrawler.h"
#include "new_library/NewDummyCrawler.h"

#include <memory>


class NewToOldAdapter: public OldDummyCrawler // adapter copies interface of the original object
{
    public:
                    NewToOldAdapter();
        std::string crawl() override;
    protected:
        std::shared_ptr<NewDummyCrawler> _crawler {nullptr};
};


#endif //DESIGN_PATTERNS_NEWTOOLDADAPTER_H
