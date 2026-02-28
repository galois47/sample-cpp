#include <iostream>
#include "Vector.h"

int main() { 
    std::cout << "V_0 \n";
    Vector v0(11, 22, 33);
    std::cout << "Vector X Coordinate " << v0.getXCoordinate() << "\n";
    std::cout << "Vector Y Coordinate " << v0.getYCoordinate() << "\n";
    std::cout << "Vector Z Coordinate " << v0.getZCoordinate() << "\n";

    std::cout << "V_1 \n";
    Vector v1(99, 88, 77);
    std::cout << "Vector X Coordinate " << v1.getXCoordinate() << "\n";
    std::cout << "Vector Y Coordinate " << v1.getYCoordinate() << "\n";
    std::cout << "Vector Z Coordinate " << v1.getZCoordinate() << "\n";

    return 0;
}