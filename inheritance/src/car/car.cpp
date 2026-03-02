#include "vehicle/vehicle.h"
#include "car/car.h"
#include <iostream>

Car::Car(std::string brand, std::string car_model) : Vehicle::Vehicle(brand), car_model(car_model) { }

void Car::displayDetails() {
    // Can access brand_name because it is protected in the base class
    std::cout << "Car Brand: " << brand_name << ", Car Model: " << car_model << std::endl;
}

