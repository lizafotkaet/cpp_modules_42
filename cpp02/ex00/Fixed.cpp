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
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other) : value(other.value){ // we use initialization list bc the new object doesn't exist yet (safer)
    std::cout << "Copy constructor called\n";
}

Fixed::~Fixed(){
    std::cout << "Destructor called\n";
};

Fixed&	Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called\n";
	this->setRawBits(other.getRawBits()); // we use setRawBits bc the object already exists
	return (*this);
}

int		Fixed::getRawBits() const{
	std::cout << "getRawBits member function called\n";
	return (this->value);
}

void	Fixed::setRawBits(const int raw){
    this->value = raw;
}
