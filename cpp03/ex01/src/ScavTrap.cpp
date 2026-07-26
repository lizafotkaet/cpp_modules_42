#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << GREEN << "ScavTrap Default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	std::cout << BLUE << "ScavTrap Copy constructor called" << RESET << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << BLUE << "ScavTrap Copy assignment operator called" << RESET << std::endl;
	if (this != &other) {

	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << RED << "ScavTrap Destructor called" << RESET << std::endl;
}
