#ifndef DESIGN_PATTERNS_DATAPROFILE_H
#define DESIGN_PATTERNS_DATAPROFILE_H


#include <map>
#include <iostream>

class DataProfile
{
    public:
        class Memento
        {
                friend class DataProfile;
            private:
                Memento (const std::map<std::string, std::map<std::string, std::string>> &data);
                std::map<std::string, std::map<std::string, std::string>> _backup;
        };

        Memento save () const;
        void    restore (const Memento &memento);

        // ...

        void insert (const std::string &section, const std::string &key, const std::string &value);
        void print  () const;
    private:
        // map of sections of data entries (in other words map of maps)
        std::map<std::string, std::map<std::string, std::string>> _data;
};


#endif //DESIGN_PATTERNS_DATAPROFILE_H
