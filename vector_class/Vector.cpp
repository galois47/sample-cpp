#include <string>
#include "Vector.h"

Vector::Vector(int x, int y, int z):m_x{x}, m_y{y}, m_z{z} {};

int Vector::getXCoordinate(){
    return Vector::m_x;
}

int Vector::getYCoordinate(){
    return Vector::m_y;
}

int Vector::getZCoordinate(){
    return Vector::m_z;
}