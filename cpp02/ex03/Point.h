#pragma once

#include <iostream>
#include <cmath>

class Point{
	public :
		Point(double x, double y);
		double getX() const;
		double getY() const;

	private : 
		double m_x;
		double m_y;
};