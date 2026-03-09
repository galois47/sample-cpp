//Includes
#include <iostream>
#include "httplib.h"
#include <nlohmann/json.hpp>

//Usings
using json = nlohmann::json;

void hi_endpoint_callback(const httplib::Request &req, httplib::Response &res)
{
    std::cout << "Printing Request Body" << req.body << std::endl;
    res.set_content(req.body, "text/plain");
};

int main()
{
    httplib::Server svr;

    json ex1 = nlohmann::json::parse(R"(
    {
        "pi": 3.141,
        "happy": true
    }
    )");

    std::cout << "Pi: " << ex1["pi"] << std::endl;
    std::cout << "Happy: " << ex1["happy"] << std::endl;

    svr.Get("/hi", hi_endpoint_callback);

    svr.listen("0.0.0.0", 8080);

    return 0;
}