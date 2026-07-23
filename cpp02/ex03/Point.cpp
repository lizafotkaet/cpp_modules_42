#include "Point.h"

Point::Point() : m_x(0), m_y(0) {}

Point::Point(const float x, const float y){
    this->m_x = Fixed(x);
    this->m_y = Fixed(y);
}

Point::Point(const Point& other) : m_x(other.m_x), m_y (other.m_y) {}

Point& Point::operator=(const Point& other){
    if (this->m_x != other.m_x){
        this->m_x == other.m_x;
    }
    if (this->m_y != other.m_y){
        this->m_y == other.m_y;
    }
    return *this;
}

Point::~Point() {};

Fixed Point::getX() const{
    return m_x;
}

Fixed Point::getY() const{
    return m_y;
}
