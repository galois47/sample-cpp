#ifndef VEHICLE
#define VEHICLE

#include <iostream>

class Vehicle {
    public:
        Vehicle(std::string);
        virtual void displayDetails();

    protected:
        std::string brand_name; // Accessible by derived classes via public inheritance
};

#endif