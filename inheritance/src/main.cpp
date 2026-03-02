#include "vehicle/vehicle.h"
#include "car/car.h"
#include <iostream>

int main() { 
    //Using derived class method
    Car* carPtr = new Car("Ford", "Mustang");
    carPtr->displayDetails();
    std::cout << "Car Ptr Memory Location: " <<carPtr << "\n";
    std::cout << "-------------------------" << "\n";

    //Using based class method
    Vehicle* vehiclePtr = new Vehicle("Honda");
    vehiclePtr->displayDetails();
    std::cout << "Vehicle Ptr Memory Location: " <<vehiclePtr << "\n";
    std::cout << "-------------------------" << "\n";

    //Vehicle from car details
    vehiclePtr = carPtr;
    vehiclePtr->displayDetails();
    std::cout << "Car Ptr Memory Location:     " <<carPtr << "\n";
    std::cout << "Vehicle Ptr Memory Location: " <<vehiclePtr << "\n";
    std::cout << "-------------------------" << "\n";

    //Deleting heap allocated ptr
    delete vehiclePtr;
    
    return 0;
}