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

Fixed::Fixed() : value(0) {
    std::cout << GREEN << "Default constructor called\n" << RESET;
}

Fixed::Fixed(const Fixed& other) : value(other.value){ // we use initialization list bc the new object doesn't exist yet (safer)
    std::cout << YELLOW << "Copy constructor called\n" << RESET;
}

Fixed::~Fixed(){
    std::cout << RED << "Destructor called\n" << RESET;
};

Fixed&	Fixed::operator=(const Fixed& other){
	std::cout << LIGHTBLUE << "Copy assignment operator called\n" << RESET;

	if (this != &other){
		this->value = other.value; // can use getRawbits but I like this more
	}

	return (*this);
}

int		Fixed::getRawBits() const{
	std::cout << "getRawBits member function called\n";
	return (this->value);
}

void	Fixed::setRawBits(const int raw){
    this->value = raw;
}
