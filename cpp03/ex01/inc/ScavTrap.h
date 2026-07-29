#pragma once

#include <iostream>
#include "ClapTrap.h"

#define GREEN "\033[32m"
#define RED "\033[31m"
#define LIGHTBLUE "\033[94m"
#define YELLOW "\033[33m"
#define PINK "\033[95m"
#define RESET "\033[0m"

class ScavTrap : public ClapTrap {
	
	public:
		ScavTrap(std::string_view name = "", int hitPoints = 100, 
				int energyPoints = 50, int attackDamage = 20); // default constructor
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap();

		void	guardGate();
	
	private:
};
