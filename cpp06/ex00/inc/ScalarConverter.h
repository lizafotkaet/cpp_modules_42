#pragma once

#include <iostream>
#include <string>
#include <string_view>
#include <exception>
#include <limits>
#include <cmath>
#include <cctype>

/*

Is the input a pseudo-literal? Handle it and return.
Detect the type: char, int, float, double, or invalid.
Parse into that exact type, checking for overflow. If the int overflows, you can fall back to double.
static_cast to the other three types, doing range checks before each cast to char or int.
Print the results with the formatting rules above.

*/

enum type_e{
	CHAR_T,
	INT_T,
	FLOAT_T,
	DOUBLE_T,
	PSEUDO_T,
	UNKNOWN_T
};

class ScalarConverter{
	public :
		ScalarConverter() = delete;
		ScalarConverter(const ScalarConverter& other) = delete;
		ScalarConverter& operator=(const ScalarConverter& other) = delete;
		~ScalarConverter();

		static void	convert(std::string_view literal);
	
		
	private :
		// helpers:
		static void print_char(std::string_view literal);
		static void print_int(std::string_view literal);
		static void print_double(std::string_view literal);
		static void print_pseudo(std::string_view literal);
		static void print_unknown(std::string_view literal);

};
