#include "vehicle/vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string brand): brand_name(brand){};

void Vehicle::displayDetails() {
    std::cout << "Vehicle Brand: " << brand_name << std::endl;
};
