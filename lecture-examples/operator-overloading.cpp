// Description: Overloading the == and != operators with friend functions.
// Author: Gokberk Gultekin
// Date: 3/23/2025

#include <iostream>

class Point {
    public:
        Point(double dX = 0.0, double dY = 0.0, double dZ = 0.0) { m_dX = dX; m_dY = dY; m_dZ = dZ; }
        friend bool operator == (Point &cP1, Point &cP2);
        friend bool operator != (Point &cP1, Point &cP2);

        double GetX() { return m_dX; }
        double GetY() { return m_dY; }
        double GetZ() { return m_dZ; }
        
        void print() { std::cout << m_dX << m_dY << m_dZ << std::endl; }
    
    private:
        double m_dX, m_dY, m_dZ;
};

bool operator == (Point &cP1, Point &cP2) {
    return (cP1.m_dX == cP2.m_dX && cP1.m_dY
        == cP2.m_dY && cP1.m_dZ == cP2.m_dZ);
}

bool operator != (Point &cP1, Point &cP2) {
    return !(cP1 == cP2);
}

int main() {
    Point point1(0.0, 0.0, 0.0);
    Point point2(3.0, 4.0, 5.0);

    Point new_point = point1 == point2;
    new_point.print();

    return 0;
}