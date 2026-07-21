#pragma once

#include <iostream>
#include <cmath>

class Fixed{
	public :
		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int n);
		Fixed(const float f);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		int getRawBits() const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;

		// 6 comparison operators: >, <, >=, <=, ==, and != 

		bool operator<(const Fixed& other); // (the left operand is the implicit *this object)
		bool operator>(const Fixed& other);
		bool operator>=(const Fixed& other);
		bool operator<=(const Fixed& other);
		bool operator==(const Fixed& other);
		bool operator!=(const Fixed& other);

		// 4 arithmetic operators: +, -, *, and /

		Fixed operator+(const Fixed& other);
		Fixed operator-(const Fixed& other);
		Fixed operator*(const Fixed& other);
		Fixed operator/(const Fixed& other);

		// The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
		// post-decrement) operators, which will increase or decrease the fixed-point value by
		// the smallest representable ϵ, such that 1 + ϵ > 1.

		Fixed& operator++(const int eps);
		Fixed& operator--(const int eps);
		Fixed& --operator(const int eps);
		Fixed& ++operator(const int eps);

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

		Fixed& min(Fixed& a, Fixed& b);
		Fixed& min(const Fixed& a, const Fixed& b);
		Fixed& max(Fixed& a, Fixed& b);
		Fixed& max(const Fixed& a, const Fixed& b);

	private :
		int	value;
		static const int fraction = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

