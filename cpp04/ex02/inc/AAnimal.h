#pragma once

#include <iostream>
#include <string>
#include "colors.h"

// any class with one or more pure virtual functions becomes an abstract base class
// which means that it can not be instantiated!

class AAnimal{
	public :
		AAnimal(const AAnimal& other);
		AAnimal& operator=(const AAnimal& other);
		virtual ~AAnimal();
	
		virtual void 		makeSound() const = 0; // pure virtual function
		const std::string&	getType() const;
	
	protected :
		AAnimal();
		std::string			m_type;
		AAnimal(const std::string& type);
};
