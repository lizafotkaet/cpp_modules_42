#include "Point.h"

int	main(void){
	Point a(0, 0.0002), b(20, 0), c(0, 20);

	// Point a(9, 10);
	// Point b(1, 2);
	// Point c(10, 0);
	Point p(55.73, 5.79);

	if (bsp(a, b, c, p)){
		std::cout << "The point is INSIDE the triangle\n";
	}
	else{
		std::cout << "The point is NOT INSIDE the triangle\n";
	}

	return 0;
}
