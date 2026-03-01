#include <iostream>
#include "vector3.h"
#include "vector4.h"

int main() { 
    Vector3 v3(1.0, 1.0, 1.0);
    std::cout << "Using Vector 3 Class! \n";
    std::cout << "X Coordinate: " << v3.getXCoordinate() << "\n";
    std::cout << "Y Coordinate: " << v3.getYCoordinate() << "\n";
    std::cout << "Z Coordinate: " << v3.getZCoordinate() << std::endl;

    Vector4 v4(2.0, 2.0, 2.0, 2.0);
    std::cout << "Using Vector 4 Class! \n";
    std::cout << "X Coordinate: " << v4.getXCoordinate() << "\n";
    std::cout << "Y Coordinate: " << v4.getYCoordinate() << "\n";
    std::cout << "Z Coordinate: " << v4.getYCoordinate() << "\n";
    std::cout << "U Coordinate: " << v4.getZCoordinate() << std::endl;

    return 0;
}