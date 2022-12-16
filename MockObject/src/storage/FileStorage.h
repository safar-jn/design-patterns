#ifndef DESIGN_PATTERNS_FILESTORAGE_H
#define DESIGN_PATTERNS_FILESTORAGE_H

#include "Storage.h"

#include <memory>
#include <fstream>


/// concrete implementation of some Storage - irrelevant for this example
class FileStorage: public Storage
{
    public:
                FileStorage(const std::string &fileName);
               ~FileStorage();
        void    write(const std::string &msg) override;
    private:
        std::shared_ptr<std::ofstream> _file;
};


#endif //DESIGN_PATTERNS_FILESTORAGE_H
