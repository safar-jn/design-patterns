#include "DataProfileSection.h"


DataProfileSection::DataProfileSection (std::string name): _name(std::move(name))
{}

void DataProfileSection::add (const std::shared_ptr<DataProfile> &child)
{
    // nest another element of the complex structure
    _children.insert(child);
}

void DataProfileSection::rmv (const std::shared_ptr<DataProfile> &child)
{
    // remove one of the nested elements of the complex structure
    _children.erase(child);
}

size_t DataProfileSection::count () const
{
    size_t cnt = 0;

    for (const auto &child : _children) // delegate the work to all nested elements and combine results
        cnt += child->count();

    return cnt;
}

double DataProfileSection::numerize () const
{
    double sum = 0.0;

    for (const auto &child : _children) // delegate the work to all nested elements and combine results
        sum += child->numerize();

    return sum / count();
}
