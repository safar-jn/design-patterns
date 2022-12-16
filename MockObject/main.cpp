#include "src/Logger.h"
#include "src/storage/Storage.h"

#include <memory>
#include <iostream>
#include <stdexcept>


/// MOCK OBJECT ========================================================================================================

// simulates simple Storage for Loggers, so they can be unit tested without any side effects
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

            // create Logger object which is under test with MockStorage
            auto mockStorage = std::make_shared<MockStorage>();
            auto logger = std::make_shared<Logger>(mockStorage);

            logger->info("hey!");

            if (mockStorage->_result != expected)
                throw std::logic_error("test for Logger.info() failed");

            std::cout << "[TestLogger] | test_info() passed successfully" << std::endl;
        }

        static void test_warn ()
        {
            std::string expected = "[WARN] hey!";

            // create Logger object which is under test with MockStorage
            auto mockStorage = std::make_shared<MockStorage>();
            auto logger = std::make_shared<Logger>(mockStorage);

            logger->warn("hey!");

            if (mockStorage->_result != expected)
                throw std::logic_error("test for Logger.warn() failed");

            std::cout << "[TestLogger] | test_warn() passed successfully" << std::endl;
        }
};

/// ====================================================================================================================

int main(int argc, char **argv)
{
    TestLogger::test_info();
    TestLogger::test_warn();

    return 0;
}
