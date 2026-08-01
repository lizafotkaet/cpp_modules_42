#pragma once

#include <iostream>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
	
	public:
		ScavTrap(std::string_view name = "<default>"); // default constructor 100 50 20
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
	
	private:
};
