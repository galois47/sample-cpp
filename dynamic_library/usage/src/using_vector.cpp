#include <iostream>
#include "vector3.h"
#include "vector4.h"

int main() { 
    Vector3 v3(30, 31, 32);
    std::cout << "Using Vector 3 Class! \n";
    std::cout << "X Coordinate: " << v3.getXCoordinate() << "\n";
    std::cout << "Y Coordinate: " << v3.getYCoordinate() << "\n";
    std::cout << "Z Coordinate: " << v3.getZCoordinate() << std::endl;

    Vector4 v4(40, 41, 42, 43);
    std::cout << "Using Vector 4 Class! \n";
    std::cout << "X Coordinate: " << v4.getXCoordinate() << "\n";
    std::cout << "Y Coordinate: " << v4.getYCoordinate() << "\n";
    std::cout << "Z Coordinate: " << v4.getZCoordinate() << "\n";
    std::cout << "U Coordinate: " << v4.getUCoordinate() << std::endl;

    return 0;
}