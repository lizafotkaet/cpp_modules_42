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
		bool operator<(const Fixed& other);
		bool operator>(const Fixed& other);
		bool operator>=(const Fixed& other);
		bool operator<=(const Fixed& other);
		bool operator==(const Fixed& other);
		bool operator!=(const Fixed& other);
		// 4 arithmetic operators: +, -, *, and /
		Fixed& operator+(const Fixed& other);
		Fixed& operator-(const Fixed& other);
		Fixed& operator*(const Fixed& other);
		Fixed& operator/(const Fixed& other);
		// The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
		// post-decrement) operators, which will increase or decrease the fixed-point value by
		// the smallest representable ϵ, such that 1 + ϵ > 1.
		Fixed& operator++(const int eps);
		Fixed& operator--(const int eps);
		Fixed& operator(const int eps);



	private :
		int	value;
		static const int fraction = 8;
};