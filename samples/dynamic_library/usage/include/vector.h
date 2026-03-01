#ifndef VECTOR
#define VECTOR

#include <string>

class Vector {     
  public:  
    Vector(int, int, int);

    int getXCoordinate();

    int getYCoordinate();

    int getZCoordinate();

  private:
    int m_x, m_y, m_z;         
};

#endif