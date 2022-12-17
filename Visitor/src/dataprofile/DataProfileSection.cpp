#include "DataProfileSection.h"


DataProfileSection::DataProfileSection (std::string name): _name(std::move(name))
{}

void DataProfileSection::add (const std::shared_ptr<DataProfile>& child)
{
    _children.insert(child);
}

void DataProfileSection::rmv (const std::shared_ptr<DataProfile>& child)
{
    _children.erase(child);
}

size_t DataProfileSection::count () const
{
    size_t cnt = 0;

    for (const auto &child : _children)
        cnt += child->count();

    return cnt;
}

const std::string &DataProfileSection::getName () const
{
    return _name;
}

const std::set<std::shared_ptr<DataProfile>> &DataProfileSection::getChildren () const
{
    return _children;
}

void DataProfileSection::accept (Exporter *exporter)
{
    // invoke functionality (i.e. export DataProfileSection) provided by corresponding visitor (i.e. exporter)
    exporter->visitDataProfile(this);
}
