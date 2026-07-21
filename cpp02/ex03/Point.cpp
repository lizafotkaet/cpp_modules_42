#include "Point.h"

Point::Point(double x, double y) : m_x(x), m_y(y) {}

double Point::getX() const{
    return m_x;
}

double Point::getY() const{
    return m_y;
}