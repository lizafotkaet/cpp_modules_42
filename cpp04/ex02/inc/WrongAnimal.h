#pragma once

#include <iostream>
#include <string>
#include "colors.h"

// non-virtual

class WrongAnimal{
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);
		~WrongAnimal();

		void makeSound() const;
		const std::string&	getType() const;

	protected :
		std::string	m_type;
		WrongAnimal(const std::string& type);
};
