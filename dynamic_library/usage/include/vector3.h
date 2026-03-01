#ifndef VECTOR3
#define VECTOR3

class Vector3 {     
  public:  
    Vector3(int, int, int);

    int getXCoordinate();

    int getYCoordinate();

    int getZCoordinate();

  private:
    int m_x, m_y, m_z;         
};

#endif