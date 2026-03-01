#include <iostream>
#include <vector.h>

int main() { 
    Vector v(1.0, 1.0, 1.0);

    std::cout << "Using Vector Program! \n";
    std::cout << "X Coordinate: " << v.getXCoordinate() << "\n";
    std::cout << "Y Coordinate: " << v.getYCoordinate() << "\n";
    std::cout << "Z Coordinate: " << v.getZCoordinate() << std::endl;

    return 0;
}