#ifndef CAR
#define CAR

#include "vehicle/vehicle.h"
#include <iostream>

class Car: public Vehicle{
    public:
        Car(std::string, std::string);
        void displayDetails();

    private:
        std::string car_model; // Specific to Car class
};

#endif