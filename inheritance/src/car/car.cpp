#include "vehicle/vehicle.h"
#include "car/car.h"
#include <iostream>

Car::Car(std::string brand, std::string car_model) : Vehicle::Vehicle(brand), model_name(car_model) { }

void Car::displayDetails() {
    // Can access brand_name because it is protected in the base class
    std::cout << "Car Brand: " << brand_name << ", Car Model: " << model_name << std::endl;
}
