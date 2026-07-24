#pragma once

#include <iostream>
#include <cmath>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define LIGHTBLUE "\033[94m"
#define YELLOW "\033[33m"
#define PINK "\033[95m"
#define RESET "\033[0m"

class Fixed{
    
    public :
		Fixed();
		Fixed(const Fixed& other); //copy constructor
		Fixed(const int n); // converts the int parameter to the corresponding fixed-point value
		Fixed(const float f); // converts the float parameter to the correspondind fixed-point value
		Fixed& operator=(const Fixed& other); //copy assignment operator
		~Fixed();

		int 	getRawBits() const; // returns the raw value of the fpn
		void	setRawBits(int const raw); // sets the raw value of the fpn
		int		toInt() const;
		float	toFloat() const;

	private :
		int					value;
		static const int	fraction = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);