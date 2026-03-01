#include "vector4.h"

Vector4::Vector4(int x, int y, int z, int u):m_x{x}, m_y{y}, m_z{z}, m_u{u} {};

int Vector4::getXCoordinate(){
    return Vector4::m_x;
}

int Vector4::getYCoordinate(){
    return Vector4::m_y;
}

int Vector4::getZCoordinate(){
    return Vector4::m_z;
}

int Vector4::getUCoordinate(){
    return Vector4::m_u;
}
