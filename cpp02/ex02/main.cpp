/*

$> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
$>

*/

#include "Fixed.h"

int main() {
	Fixed 		a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	Fixed const c(Fixed(5) + Fixed(3));
	Fixed const d(Fixed(4.4f) - Fixed(-1));
	Fixed e(Fixed(11.1f) * Fixed(5));
	Fixed const f(Fixed(12) / Fixed(8));

	std::cout << a << '\n';
	std::cout << "Pre-incrementing a: " << ++a << '\n';
	std::cout << a << '\n';
	std::cout << "Post-incrementing a: " << a++ << '\n';
	std::cout << a << '\n';
	std::cout << b << '\n';
	std::cout << "Pre-decrementing a: " << --a << '\n';
	std::cout << "Post-decrementing a: " << a-- << '\n';
	std::cout << "New a: " << a << '\n';
	
	std::cout << "Add (c): " << c << '\n';
	std::cout << "Subtract (d): " << d << '\n';
	std::cout << "Multiply (e): " << e << '\n';
	std::cout << "Divide (f): " << f << '\n';
	
	std::cout << "Max(a,b): " << Fixed::max( a, b ) << '\n'; // the whole call falls to const overload since non-const args can bind to a const reference
	std::cout << "Min(e,f): " << Fixed::min( e, f ) << '\n';

	return 0;
}