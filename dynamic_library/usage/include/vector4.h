#ifndef VECTOR4
#define VECTOR4

class Vector4 {     
  public:  
    Vector4(int, int, int, int);

    int getXCoordinate();

    int getYCoordinate();

    int getZCoordinate();

    int getUCoordinate();

  private:
    int m_x, m_y, m_z, m_u;         
};

#endif