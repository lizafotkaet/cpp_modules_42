#include "Point.h"

Fixed triangleArea(const Point& a, const Point& b, const Point& c){
	Fixed area;

	area = (b.getX() - a.getX()) * (c.getY() - a.getY()) -
				(b.getY() - a.getY()) * (c.getX() - a.getX());

	if (area < 0){
		return -area;
	}
    return area;
}

bool bsp(Point& const a, Point& const b, Point& const c, Point& const p){

    Fixed	total = triangleArea(a, b, c);
	Fixed	t1 = triangleArea(a, b, p);
	Fixed	t2 = triangleArea(a, c, p);
	Fixed	t3 = triangleArea(b, c, p);

	if (t1 == 0 || t2 == 0 || t3 == 0){
		return false;
	}

	if (t1 + t2 + t3 == total){
		return true;
	}

	return false;
}