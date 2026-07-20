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

	private :
		int	value;
		static const int fraction = 8;
};