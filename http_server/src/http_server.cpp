//Includes
#include <iostream>
#include "httplib.h"
#include <nlohmann/json.hpp>

//Usings
using json = nlohmann::json;

void hi_endpoint_callback(const httplib::Request &req, httplib::Response &res)
{
    std::cout << "Printing Request Body " << req.body << std::endl;

    //Deserializing request into json-like object
    json ex2 = nlohmann::json::parse(req.body);
    std::cout << "One: " << ex2["one"] << std::endl;
    std::cout << "Two: " << ex2["two"] << std::endl;
    std::cout << "Three: " << ex2["three"] << std::endl;

    //Responding with same body in request
    res.set_content(req.body, "text/plain");
};

int main()
{
    httplib::Server svr;

    svr.Get("/hi", hi_endpoint_callback);
    svr.listen("0.0.0.0", 8080);

    return 0;
}