#include "vehicle/vehicle.h"
#include "car/car.h"
#include <iostream>

Car::Car(std::string brand, std::string car_model) : Vehicle::Vehicle(brand), model_name(car_model) { }

void Car::displayDetails() {
    std::cout << "Car Brand: " << brand_name << ", Car Model: " << model_name << std::endl;
}
