#include "vehicle/vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string brand): brand_name(brand){};

void Vehicle::honk() {
    std::cout << "Vehicle honking!" << std::endl;
};
