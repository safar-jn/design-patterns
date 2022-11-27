#ifndef DESIGN_PATTERNS_DATAPROFILEITERATOR_H
#define DESIGN_PATTERNS_DATAPROFILEITERATOR_H


#include <map>
#include <iterator>


class DataProfileIterator
{
        typedef std::map<std::string, std::map<std::string, std::string>>::iterator SectionsIterator;
        typedef std::map<std::string, std::string>::iterator                        EntriesIterator;
    public:
        DataProfileIterator (SectionsIterator section, EntriesIterator entry, SectionsIterator end);
        DataProfileIterator  operator++ ();
        DataProfileIterator& operator*  ();
        DataProfileIterator* operator-> ();
        bool                 operator== (const DataProfileIterator &rhs);
        bool                 operator!= (const DataProfileIterator &rhs);
        // ...
        std::string          stringify  () const;
    private:
        SectionsIterator _current_section;
        EntriesIterator  _current_entry;
        SectionsIterator _end;
};


#endif //DESIGN_PATTERNS_DATAPROFILEITERATOR_H
