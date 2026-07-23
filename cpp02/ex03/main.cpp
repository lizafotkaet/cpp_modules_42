#include "Point.h"

int	main(int ac, char** av){
	(void)ac;
	(void)av;
	
	Point a(9, 10);
	Point b(1, 2);
	Point c(3, 4);
	Point p(5, 6);

	if (bsp(a, b, c, p)){
		std::cout << "The point is in the triangle\n";
	}
	else{
		std::cout << "The point is outside the triangle\n";
	}

	// std::cout << "Enter the coordinates of the vertices of the triangle: ";

	// std::cin << a << b << c << std::endl;

	return 0;
}