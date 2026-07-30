#pragma once

#include "ClapTrap.h"

class FragTrap : public ClapTrap {
	
	public:
		FragTrap(std::string_view name = "<default>", int hitPoints = 100, 
				int energyPoints = 100, int attackDamage = 30); // default constructor
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		~FragTrap();

		void	highFivesGuys();
	
	private:
};