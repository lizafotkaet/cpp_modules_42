#pragma once

#include <iostream>
#include <string>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define LIGHTBLUE "\033[94m"
#define YELLOW "\033[33m"
#define PINK "\033[95m"
#define RESET "\033[0m"

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
