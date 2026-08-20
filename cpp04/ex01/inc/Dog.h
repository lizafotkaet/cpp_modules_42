#pragma once

#include "Animal.h"
#include "Brain.h"

class Dog : public Animal{
	public : 
		Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog() override;

		void	makeSound() const override;

		void		setIdea(int i, const std::string& idea);
		std::string	getIdea(int i) const;
	
	private :
		Brain*	m_brain;
};
