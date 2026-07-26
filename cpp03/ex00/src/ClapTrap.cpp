#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << GREEN << "ClapTrap Default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << BLUE << "ClapTrap Copy constructor called" << RESET << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << BLUE << "ClapTrap Copy assignment operator called" << RESET << std::endl;
	if (this != &other) {

	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << RED << "ClapTrap Destructor called" << RESET << std::endl;
}
