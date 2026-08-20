#pragma once

#include "AAnimal.h"
#include "Brain.h"

class Cat : public AAnimal{
	public :
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat() override;

		void	makeSound() const override;

		void		setIdea(int i, const std::string& idea);
		std::string	getIdea(int i) const;

	private :
		Brain*	m_brain;
};
