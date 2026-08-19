#pragma once

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal{
	public :
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();

		void	makeSound() const;
	private :
		Brain*	brain;
};