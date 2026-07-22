#include "Fixed.h"

Fixed::Fixed() : value(0){
    std::cout << GREEN << "Default constructor called\n" << RESET;
}

Fixed::~Fixed(){
	std::cout << RED << "Destructor called\n" << RESET;
}

Fixed::Fixed(const Fixed& other) : value(other.value){
    std::cout << YELLOW << "Copy constructor called\n" << RESET;
}

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << LIGHTBLUE << "Copy assignment operator called\n" << RESET;
    if (this != &other){
        this->value = other.value;
    }
    return *this;
}

Fixed::Fixed(const int n) : value(n << fraction){
    std::cout << GREEN << "Int constructor called\n" << RESET;
}

Fixed::Fixed(const float f) : value(roundf(f * 256)){
    std::cout << GREEN << "Float constructor called\n" << RESET;
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

bool	Fixed::operator>(const Fixed& other) const{
	return (this->value > other.value);
}

bool	Fixed::operator<(const Fixed& other) const{
	return (this->value < other.value);
}

bool	Fixed::operator>=(const Fixed& other) const{
	return (this->value >= other.value);
}

bool	Fixed::operator<=(const Fixed& other) const{
	return (this->value <= other.value);
}

bool	Fixed::operator==(const Fixed& other) const{
	return (this->value == other.value);
}

bool	Fixed::operator!=(const Fixed& other) const{
	return (this->value != other.value);
}

// 4 arithmetic operators: +, -, *, and /

Fixed	Fixed::operator+(const Fixed& other) const{
	Fixed result;

	result.setRawBits(this->value + other.value);
	return result;
}

Fixed	Fixed::operator-(const Fixed& other) const{
	Fixed result;

	result.setRawBits(this->value - other.value);
	return result;
}

Fixed	Fixed::operator*(const Fixed& other) const{ // stores real * 256
	Fixed result;

	result.setRawBits(static_cast<int>
				((static_cast<long>(this->value) * other.value) >> fraction)); // can't have 256*256, so shift (divide) by 2**8
	return result;
}

Fixed	Fixed::operator/(const Fixed& other) const{
	Fixed result;

	result.setRawBits(static_cast<int>
				((static_cast<long>(this->value) << fraction) / other.value)); // the opposite: we divide by 256 twice and lose the raw fpn integer; gotta shift (multiply) by 2**8 again
	return result;
}

// The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
// post-decrement) operators, which will increase or decrease the fixed-point value by
// the smallest representable ϵ, such that 1 + ϵ > 1.

Fixed&	Fixed::operator++(){ // prefix increment
	++(this->value); // value += 1/256

	return *this;
}

Fixed& Fixed::operator--(){ // prefix decrement
	--(this->value);

	return *this;
}

Fixed Fixed::operator++(int){ // postfix increment
	Fixed temp(*this);

	++(*this);

	return temp;
}

Fixed Fixed::operator--(int){ // postfix decrement
	Fixed temp(*this);

	--(*this);

	return temp;
}

/*

Add these four public overloaded member functions to your class:
• A static member function min that takes two references to fixed-point numbers as
parameters, and returns a reference to the smallest one.
• A static member function min that takes two references to CONSTANT fixed-point
numbers as parameters, and returns a reference to the smallest one.
• A static member function max that takes two references to fixed-point numbers as
parameters, and returns a reference to the greatest one.
• A static member function max that takes two references to CONSTANT fixed-point
numbers as parameters, and returns a reference to the greatest one.

*/

Fixed& Fixed::min(Fixed& a, Fixed& b){
	return (a < b) ? a : b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
	return (a > b) ? a : b;
}

// input stream insertion operator overload

std::ostream& operator<<(std::ostream& out, const Fixed& fixed){
    out << fixed.toFloat();

    return out;
}