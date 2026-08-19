#pragma once

#include "Animal.h"
#include "Brain.h"

class Dog : public Animal{
	public : 
		Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog();

		void	makeSound() const;
	
	private :
		Brain*	brain;
};