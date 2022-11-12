#include "Crawler.h"


Crawler::Crawler (const std::string &url, bool log): _url(url), _log(log)
{}

void Crawler::start ()
{
    /// simulate downloading a requested website

    std::cout << "[crawler] | downloading website '" << _url << "'" << std::endl;

    std::string html =  "<html>"
                            "<head>"
                                "..."
                            "</head>"
                            "<body>"
                                "..."
                            "</body>"
                        "</html>";

    if (_log)
        logToDWH(html);

    // ...
}

void Crawler::logToDWH (const std::string &data)
{
    /// simulate logging to DWH

    if (!_conn)
        _conn = std::make_shared<DWHConnection>("host_1:8080", "admin", "1234");

    _conn->save(data);
}
