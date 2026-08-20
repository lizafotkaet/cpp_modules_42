#pragma once

#include <iostream>
#include <string>
#include "colors.h"

#define SIZE_ARR 100

class Brain{
	public :
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();

		std::string	getIdea(int i) const;
		void		setIdea(int i, const std::string& idea);
	
	private :
		std::string	m_ideas[SIZE_ARR];
};
