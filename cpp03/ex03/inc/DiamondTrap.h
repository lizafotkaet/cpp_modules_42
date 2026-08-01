#pragma once

#include "FragTrap.h"
#include "ScavTrap.h"

class DiamondTrap : public FragTrap, public ScavTrap{
	public :
		DiamondTrap(std::string_view name = "<default>"); // default constructor
		DiamondTrap(const DiamondTrap& other); // copy constructor
		DiamondTrap& operator=(const DiamondTrap& other); // copy assignment operator
		~DiamondTrap();

		void	whoAmI();
		using	ScavTrap::attack;

	private :
		std::string m_nameD;
};