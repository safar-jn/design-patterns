#include <memory>

#include "src/Logger.h"
#include "src/storage/Storage.h"

/// MOCK OBJECT ========================================================================================================

class MockStorage: public Storage
{
    public:
        void write (const std::string &msg) override { _result = msg; }
        std::string _result;
};

/// ====================================================================================================================

class TestLogger
{
    public:
        static void test_info ()
        {
            std::string expected = "[INFO] hey!";

            auto mockStorage = std::make_shared<MockStorage>();
            auto logger = std::make_shared<Logger>(mockStorage);

            logger->info("hey!");

            if (mockStorage->_result != expected)
                throw std::logic_error("test for Logger.info() failed");
        }

        static void test_warn ()
        {
            std::string expected = "[WARN] hey!";

            auto mockStorage = std::make_shared<MockStorage>();
            auto logger = std::make_shared<Logger>(mockStorage);

            logger->warn("hey!");

            if (mockStorage->_result != expected)
                throw std::logic_error("test for Logger.info() failed");
        }
};

/// ====================================================================================================================

int main(int argc, char **argv)
{
    TestLogger::test_info();
    TestLogger::test_warn();

    return 0;
}
