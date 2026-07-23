#include "Point.h"

Fixed product(const Point& a, const Point& b, const Point& p) {
    return (b.getX() - a.getX()) * (p.getY() - a.getY()) -
           (b.getY() - a.getY()) * (p.getX() - a.getX());
}

bool bsp(const Point& a, const Point& b, const Point& c, const Point& p) {
    Fixed p1 = product(a, b, p);
    Fixed p2 = product(b, c, p);
    Fixed p3 = product(c, a, p);

    // на вершине или на ребре - false
    if (p1 == 0 || p2 == 0 || p3 == 0){
        return false;
	}

	// все произведения должны быть либо положительными либо отрицательными

	if ((p1 < 0 && p2 < 0 && p3 < 0) || (p1 > 0 && p2 > 0 && p3 > 0)){
		return true;
	}
	else{
		return false;
	}
}

// Fixed triangleArea(const Point& a, const Point& b, const Point& c){
// 	Fixed area;

// 	area = (b.getX() - a.getX()) * (c.getY() - a.getY()) -
// 				(b.getY() - a.getY()) * (c.getX() - a.getX());

// 	if (area < 0){
// 		return -area;
// 	}
//     return area;
// }

// bool bsp(const Point& a, const Point& b, const Point& c, const Point& p){

//     Fixed	total = triangleArea(a, b, c);
// 	Fixed	t1 = triangleArea(a, b, p);
// 	Fixed	t2 = triangleArea(a, c, p);
// 	Fixed	t3 = triangleArea(b, c, p);

// 	if (t1 == 0 || t2 == 0 || t3 == 0){
// 		return false;
// 	}

// 	if (t1 + t2 + t3 == total){
// 		return true;
// 	}

// 	return false;
// }
