#include "vector3.h"

Vector3::Vector3(int x, int y, int z):m_x{x}, m_y{y}, m_z{z} {};

int Vector3::getXCoordinate(){
    return Vector3::m_x;
}

int Vector3::getYCoordinate(){
    return Vector3::m_y;
}

int Vector3::getZCoordinate(){
    return Vector3::m_z;
}