#pragma once

#include <iostream>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define LIGHTBLUE "\033[94m"
#define YELLOW "\033[33m"
#define PINK "\033[95m"
#define RESET "\033[0m"

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
