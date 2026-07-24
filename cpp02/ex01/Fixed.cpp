#include "Fixed.h"

//const int Fixed::fraction = 8;

Fixed::Fixed() : value(0) {
    std::cout << RED << "Default constructor called\n" << RESET;
}

Fixed::Fixed(const int n) : value(n << fraction){ // convert from int to fpn
	std::cout << "Int constructor called\n";
//	this->value = n << fraction;
}

Fixed::Fixed(const float f) : value (roundf(f * (1 << fraction))){ // convert from float to fpn rounding to the closest int
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& other) : value(other.value){
    std::cout << YELLOW << "Copy constructor called\n" << RESET;
}

Fixed::~Fixed(){
    std::cout << RED << "Destructor called\n" << RESET;
}

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << LIGHTBLUE << "Copy assignment operator called\n" << RESET;

    if (this != &other){
        this->value = other.value;
    }

    return *this;
}

int Fixed::getRawBits() const{
    std::cout << "getRawbits member function called\n";
    return (this->value);
}

void Fixed::setRawBits(const int raw){
    this->value = raw;
}

int	Fixed::toInt() const{ // convert from fpn to int
	int n = (this->value >> fraction);

    return n;
}

float Fixed::toFloat() const{ // convert from fpn to float
    float f = (this->value / static_cast<float>(1 << fraction)); // .0 matters, otherwise I get an integer

    return f;
}

// << operator overload!!!

std::ostream& operator<<(std::ostream& out, const Fixed& fixed){
    out << fixed.toFloat();

    return out;
}