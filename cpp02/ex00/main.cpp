/*

$> ./a.out
Default constructor called
Copy constructor called
Copy assignment operator called // <-- This line may be missing depending on your implementation
getRawBits member function called
Default constructor called
Copy assignment operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called
$>

*/

#include "Fixed.h"

int	main(){
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << '\n';
	std::cout << b.getRawBits() << '\n';
	std::cout << c.getRawBits() << '\n';

	// a.setRawBits(4);
	// b = a;
	// c.setRawBits(6);

	// Fixed d(c);

	// std::cout << "a: " << a.getRawBits() << '\n';
	// std::cout << "b: " << b.getRawBits() << '\n';
	// std::cout << "c: " << c.getRawBits() << '\n';
	// std::cout << "d: " << d.getRawBits() << '\n';

	return 0;
}