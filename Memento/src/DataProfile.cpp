#include "DataProfile.h"


DataProfile::Memento::Memento (const std::map<std::string, std::map<std::string, std::string>> &data): _backup(data)
{}

DataProfile::Memento DataProfile::save () const
{
    // create snapshot of current DataProfile state
    return {_data};
}

void DataProfile::restore (const DataProfile::Memento &memento)
{
    // load previously captured state
    _data.clear();
    _data = memento._backup;
}

// --------------------

void DataProfile::insert (const std::string &section, const std::string &key, const std::string &value)
{
    if (_data.find(section) == _data.end())
        _data.insert({section, {}});

    _data[section].insert({key, value});
}

void DataProfile::print () const
{
    for (const auto &section : _data)
    {
        std::cout << "[" << section.first << "]\n";

        for (const auto &entry : section.second)
        {
            std::cout << " |- " << entry.first << "='" << entry.second << "'\n";
        }
    }
    std::cout << std::endl;
}
