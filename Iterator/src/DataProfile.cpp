#include "DataProfile.h"


void DataProfile::insert (const std::string &section, const std::string &key, const std::string &value)
{
    if (_data.find(section) == _data.end())
        _data.insert({section, {}});

    _data[section].insert({key, value});
}

DataProfileIterator DataProfile::begin ()
{
    return { _data.begin(), _data.begin()->second.begin(), --_data.end() };
}

DataProfileIterator DataProfile::end ()
{
    return { --_data.end(), (--_data.end())->second.end(), --_data.end() };
}
