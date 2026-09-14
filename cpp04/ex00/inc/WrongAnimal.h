#pragma once

#include <iostream>
#include <string>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define LIGHTBLUE "\033[94m"
#define YELLOW "\033[33m"
#define PINK "\033[95m"
#define RESET "\033[0m"

// non-virtual

class WrongAnimal{
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);
		~WrongAnimal();

		void 				makeSound() const;
		const std::string&	getType() const;

	protected :
		std::string			m_type;
		WrongAnimal(const std::string& type);
};
