#include "Fixed.h"

Fixed::Fixed() : value(0){
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other) : value(other.value){
    std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called\n";
    if (this != &other){
        this->value = other.value;
    }
    return *this;
}

a = b;

Fixed::Fixed(const int n) : value(n << fraction){
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float f) : value(roundf(f * 256)){
    std::cout << "Float constructor called\n";
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits called\n";
    return this->value;
}

void Fixed::setRawBits(const int raw){
    this->value = raw;
}

int Fixed::toInt(void) const{

}

float Fixed::toFloat(void) const{

}