#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string_view name, int hitPoints, int energyPoints, int attackDamage) : 
			ClapTrap(name, hitPoints, energyPoints, attackDamage) {
	std::cout << GREEN << "ScavTrap Default constructor for " <<
			this->m_name << " has been called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
	std::cout << LIGHTBLUE << "ScavTrap Copy constructor for " <<
			this->m_name << " has been called\n" << RESET;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << YELLOW << "ScavTrap Copy assignment operator for " <<
					 this->m_name << " has been called\n" << RESET;
	return (*this);
}


ScavTrap::~ScavTrap() {
	std::cout << RED << "ScavTrap Destructor for " <<
			this->m_name << " has been called" << RESET << std::endl;
}


// ---------------------------------------- //

void ScavTrap::attack(const std::string& target){
	if (this->m_energyPoints == 0){
		std::cout << "This ScavTrap has no energy to attack :c\n";
	}
	else if(this->m_hitPoints == 0){
		std::cout << "No hit points left, this ScavTrap is dead :c\n";
	}
	else{
		std::cout << "ScavTrap " << this->m_name << " attacks "
					<< target << ", causing " << this->m_attackDamage
						<< " points of damage!\n";
		--(this->m_energyPoints);
	}
	std::cout << PINK << "Current stats: \nHP: " << this->m_hitPoints <<
		"\nEP: " << this->m_energyPoints << '\n' << RESET;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->m_name << " is now in Gate keeper mode\n";
}