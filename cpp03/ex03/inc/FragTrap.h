#pragma once

#include "ClapTrap.h"

class FragTrap : virtual public ClapTrap {
	
	public:
		FragTrap(std::string_view name = "<default>"); // default constructor 100 100 30
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		~FragTrap();

		void	highFivesGuys();
	
	private:
};