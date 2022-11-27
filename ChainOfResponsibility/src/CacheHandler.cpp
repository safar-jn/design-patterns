#include "CacheHandler.h"


std::unordered_map<std::string, std::string> CacheHandler::_CACHED_RESULTS =
        {
            std::make_pair("CLIENT_ID_1", "RESULT_1"),
            std::make_pair("CLIENT_ID_2", "RESULT_2"),
            std::make_pair("CLIENT_ID_3", "RESULT_3"),
            std::make_pair("CLIENT_ID_4", "RESULT_4"),
        };

std::string CacheHandler::handle (const std::string &request)
{
    /// simulate searching internal database for cached results

    std::regex re(".*<clientID>(.*)</clientID>.*");
    std::smatch match;

    std::regex_search(request, match, re);

    auto result = _CACHED_RESULTS.find(match[1]);

    return result == _CACHED_RESULTS.end() ? BaseHandler::handle(request) : "result found in cache: " + result->second;
}
