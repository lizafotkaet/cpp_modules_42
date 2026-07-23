#pragma once

#include <iostream>
#include <cmath>
#include "Fixed.h"

class Point{
	public :
		Point();
		Point(const float x, const float y); // convert to Fixed
		Point(const Point& other);
		Point& operator=(const Point& other);
		~Point();
		Fixed 	getX() const;
		Fixed 	getY() const;

	private : 
		Fixed m_x;
		Fixed m_y;
};

bool	bsp(const Point& a, const Point& b, const Point& c, const Point& p);
Fixed	product(const Point& a, const Point& b, const Point& p);
//Fixed	triangleArea(const Point& a, const Point& b, const Point& c);