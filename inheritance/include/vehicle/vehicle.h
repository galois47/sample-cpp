#ifndef VEHICLE
#define VEHICLE

#include <iostream>

class Vehicle {
    public:
        Vehicle(std::string);
        void honk();

    protected:
        std::string brand_name; // Accessible by derived classes via public inheritance
};

#endif