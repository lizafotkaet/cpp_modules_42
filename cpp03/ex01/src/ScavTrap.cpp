#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string_view name, int hitPoints, int energyPoints, int attackDamage) : 
			ClapTrap(name, hitPoints, energyPoints, attackDamage) {
	std::cout << GREEN << "ScavTrap Default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
	std::cout << LIGHTBLUE << "ScavTrap Copy constructor for " <<
			this->m_name << " has been called\n" << RESET;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
	if (this != &other) {
		this->m_name = other.m_name;
		this->m_hitPoints = other.m_hitPoints;
		this->m_energyPoints = other.m_energyPoints;
		this->m_attackDamage = other.m_attackDamage;
	}
	std::cout << YELLOW << "ScavTrap Copy assignment operator for " <<
					 this->m_name << " has been called\n" << RESET;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << RED << "ScavTrap Destructor called" << RESET << std::endl;
}


// ---------------------------------------- //

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode\n";
}