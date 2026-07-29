#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string_view name, int hitPoints, int energyPoints, int attackDamage) : 
			ClapTrap(name, hitPoints, energyPoints, attackDamage) {
	std::cout << GREEN << "ScavTrap Default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	std::cout << LIGHTBLUE << "ScavTrap Copy constructor called" << RESET << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << YELLOW << "ScavTrap Copy assignment operator called" << RESET << std::endl;
	if (this != &other) {

	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << RED << "ScavTrap Destructor called" << RESET << std::endl;
}
