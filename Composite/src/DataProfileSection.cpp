#include "DataProfileSection.h"


DataProfileSection::DataProfileSection (const std::string &name): _name(name)
{}

void DataProfileSection::add (std::shared_ptr<DataProfile> child)
{
    _children.insert(child);
}

void DataProfileSection::rmv (std::shared_ptr<DataProfile> child)
{
    _children.erase(child);
}

float DataProfileSection::correctness () const
{
    float sum = 0.0;

    for (const auto &child : _children)
        sum += child->correctness();

    return sum / _children.size();
}
