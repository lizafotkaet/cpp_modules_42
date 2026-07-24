#pragma once

#include <iostream>
#include <cmath>

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