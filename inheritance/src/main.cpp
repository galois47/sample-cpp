#include "vehicle/vehicle.h"
#include "car/car.h"
#include <iostream>

int main() { 
    Car myCar("Ford", "Mustang"); 

    myCar.honk();
    myCar.displayDetails();
    
    return 0;
}