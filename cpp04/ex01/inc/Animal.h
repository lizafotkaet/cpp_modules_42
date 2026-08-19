#pragma once

#include <iostream>
#include <string>
#include "colors.h"

class Animal{
	public :
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();

		virtual void makeSound() const;
		const std::string&	getType() const;

	protected :
		std::string	m_type;
		Animal(const std::string& type);
};
