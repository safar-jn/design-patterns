#ifndef DESIGN_PATTERNS_DATAPROFILE_H
#define DESIGN_PATTERNS_DATAPROFILE_H


#include <map>
#include <iostream>


/// simulate object that supports save/load of its state via Mementos
class DataProfile
{
    public:
        /// encapsulated class for mementos (mimics attributes of the main class - DataProfile)
        class Memento
        {
                friend class DataProfile;
            private:
                Memento (const std::map<std::string, std::map<std::string, std::string>> &data);
                std::map<std::string, std::map<std::string, std::string>> _backup;
        };

        Memento save    () const; // create snapshot of current state
        void    restore (const Memento &memento); // load previously captured state

        // ...
        void insert (const std::string &section, const std::string &key, const std::string &value);
        void print  () const;
    private:
        // map of sections of data entries (in other words map of maps)
        std::map<std::string, std::map<std::string, std::string>> _data;
};


#endif //DESIGN_PATTERNS_DATAPROFILE_H
