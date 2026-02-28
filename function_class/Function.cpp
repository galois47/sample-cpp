#include <string>
#include "Vector.h"

Vector::Vector(int x, int y, int z){
    Vector::m_x = x;
    Vector::m_y = y;
    Vector::m_z = z;
}

int Vector::getXCoordinate(){
    return Vector::m_x;
}

int Vector::getYCoordinate(){
    return Vector::m_y;
}

int Vector::getZCoordinate(){
    return Vector::m_z;
}