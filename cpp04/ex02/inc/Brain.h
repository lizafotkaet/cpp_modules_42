#pragma once

#include <iostream>
#include <string>
#include <array>
#include "colors.h"

#define SIZE 100

class Brain{
	public :
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();

		std::string getIdea(int i) const;
		void			setIdea(int i, const std::string& idea);
	
	private :
		std::array<std::string, SIZE>	m_ideas;
};
