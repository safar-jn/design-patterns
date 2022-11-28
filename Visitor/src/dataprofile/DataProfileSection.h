#ifndef DESIGN_PATTERNS_DATAPROFILESECTION_H
#define DESIGN_PATTERNS_DATAPROFILESECTION_H


#include "DataProfile.h"

#include <set>
#include <memory>


class DataProfileSection: public DataProfile
{
    public:
                                                      DataProfileSection  (const std::string &name);
        void                                          add                 (const std::shared_ptr<DataProfile>& child);
        void                                          rmv                 (const std::shared_ptr<DataProfile>& child);
        size_t                                        count               () const override;
        const std::string&                            getName             () const;
        const std::set<std::shared_ptr<DataProfile>>& getChildren         () const;
        // ...
        void                                          accept              (Exporter *exporter) override;
    private:
        std::string                            _name;
        std::set<std::shared_ptr<DataProfile>> _children;
};


#endif //DESIGN_PATTERNS_DATAPROFILESECTION_H
