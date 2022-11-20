#include "DataProfileIterator.h"


DataProfileIterator::DataProfileIterator (SectionsIterator section, EntriesIterator entry, SectionsIterator end):
    _current_section(section), _current_entry(entry), _end(end)
{}

DataProfileIterator DataProfileIterator::operator++ ()
{
    _current_entry++;

    if (_current_entry == _current_section->second.end() && _current_section != _end)
    {
        _current_section++;
        _current_entry = _current_section->second.begin();
    }

    return *this;
}

DataProfileIterator& DataProfileIterator::operator* ()
{
    return *this;
}

DataProfileIterator* DataProfileIterator::operator-> ()
{
    return this;
}

bool DataProfileIterator::operator== (const DataProfileIterator &rhs)
{
    return _current_section == rhs._current_section && _current_entry == rhs._current_entry;
}

bool DataProfileIterator::operator!= (const DataProfileIterator &rhs)
{
    return !(*this == rhs);
}

std::string DataProfileIterator::stringify () const
{
    return "[" + _current_section->first + "] | " + _current_entry->first + "='" + _current_entry->second + "'";
}
