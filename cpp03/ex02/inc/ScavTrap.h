#pragma once

#include <iostream>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
	
	public:
		ScavTrap(std::string_view name = "<default>", int hitPoints = 100, 
				int energyPoints = 50, int attackDamage = 20); // default constructor
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
	
	private:
};
