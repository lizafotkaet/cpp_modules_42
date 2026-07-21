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
    int n = (this->value >> fraction);

    return n;
}

float Fixed::toFloat(void) const{
    float f = (this->value / 256.0); // .0 matters or I get and int

    return f;
}

// 6 comparison operators: >, <, >=, <=, ==, and != 

bool	Fixed::operator>(const Fixed& other){

}

bool	Fixed::operator<(const Fixed& other){
	
}

bool	Fixed::operator>=(const Fixed& other){

}

bool	Fixed::operator<=(const Fixed& other){
	
}

bool	Fixed::operator==(const Fixed& other){
	
}

bool	Fixed::operator!=(const Fixed& other){
	
}

// 4 arithmetic operators: +, -, *, and /

Fixed	Fixed::operator+(const Fixed& other){

}

Fixed	Fixed::operator-(const Fixed& other){
	
}

Fixed	Fixed::operator*(const Fixed& other){
	
}

Fixed	Fixed::operator/(const Fixed& other){
	
}

// The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
// post-decrement) operators, which will increase or decrease the fixed-point value by
// the smallest representable ϵ, such that 1 + ϵ > 1.

Fixed&	Fixed::operator++(const int eps){

}

Fixed& Fixed::operator--(const int eps){

}

Fixed& Fixed::--operator(const int eps){

}

Fixed& Fixed::++operator(const int eps){
	
}

/*

Add these four public overloaded member functions to your class:
• A static member function min that takes two references to fixed-point numbers as
parameters, and returns a reference to the smallest one.
• A static member function min that takes two references to constant fixed-point
numbers as parameters, and returns a reference to the smallest one.
• A static member function max that takes two references to fixed-point numbers as
parameters, and returns a reference to the greatest one.
• A static member function max that takes two references to constant fixed-point
numbers as parameters, and returns a reference to the greatest one.

*/

Fixed& Fixed::min(Fixed& a, Fixed& b){

}
Fixed& Fixed::min(const Fixed& a, const Fixed& b){

}

Fixed& Fixed::max(Fixed& a, Fixed& b){

}

Fixed& Fixed::max(const Fixed& a, const Fixed& b){

}






std::ostream& operator<<(std::ostream& out, const Fixed& fixed){
    out << fixed.toFloat();

    return out;
}