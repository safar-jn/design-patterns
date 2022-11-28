#include "DataProfileSection.h"


DataProfileSection::DataProfileSection (const std::string &name): _name(name)
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
    exporter->visitDataProfile(this);
}