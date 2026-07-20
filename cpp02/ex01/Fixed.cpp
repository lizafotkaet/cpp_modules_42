#include "Fixed.h"

//const int Fixed::fraction = 8;

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int n) : value(n << fraction){ // convert from int to fpn
	std::cout << "Int constructor called\n";
//	this->value = n << fraction;
}

Fixed::Fixed(const float f) : value (roundf(f * 256)){ // convert from float to fpn rounding to the closest int
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& other) : value(other.value){
    std::cout << "Copy constructor called\n";
}

Fixed::~Fixed(){
    std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called\n";

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

int	Fixed::toInt(void) const{ // convert from fpn to int
	int n = (this->value >> fraction);

    return n;
}

float Fixed::toFloat(void) const{ // convert from fpn to float
    float f = (this->value / 256.0); // .0 matters, otherwise I get an integer

    return f;
}

// << operator overload!!!

std::ostream& operator<<(std::ostream& out, const Fixed& fixed){
    out << fixed.toFloat();

    return out;
}