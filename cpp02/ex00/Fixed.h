#pragma once

#include <iostream>

class Fixed{

	public :
		Fixed();
		Fixed(const Fixed& other); // copy constructor
		Fixed&	operator=(const Fixed& other); // copy assignment operator
		~Fixed();

		int getRawBits() const; // returns the raw value of the fixed-point value
		void setRawBits(int const raw); // sets the raw value of the fixed-point number

	private :
		int					value;
		static const int	fraction = 8;
};
