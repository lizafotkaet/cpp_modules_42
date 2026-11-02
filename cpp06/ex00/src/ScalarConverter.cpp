#include "ScalarConverter.h"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter& other){}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){}

ScalarConverter::~ScalarConverter(){};

void	ScalarConverter::convert(std::string_view literal){
	type_e type{};

	switch (type){
		case CHAR_T:
		case INT_T:
		case FLOAT_T:
		case DOUBLE_T:
		case UNKNOWN_T:
	}
}

// helpers:

void ScalarConverter::print_char(std::string_view literal){
	try{
		std::cout
	}

}
void ScalarConverter::print_int(std::string_view literal){

}
void ScalarConverter::print_double(std::string_view literal){

}
void ScalarConverter::print_pseudo(std::string_view literal){

}

void ScalarConverter::print_unknown(std::string_view literal){

}