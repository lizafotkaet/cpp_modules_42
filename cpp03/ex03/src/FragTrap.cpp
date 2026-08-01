#include "FragTrap.h"

FragTrap::FragTrap(std::string_view name) : ClapTrap(name, 100, 100, 30) {
	std::cout << GREEN << "FragTrap Default constructor for " <<
			this->m_name << " has been called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	std::cout << LIGHTBLUE << "FragTrap Copy constructor for " <<
			this->m_name << " has been called\n" << RESET;
}

FragTrap& FragTrap::operator=(const FragTrap& other){
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << YELLOW << "FragTrap Copy assignment operator for " <<
					 this->m_name << " has been called\n" << RESET;
	return (*this);
}


FragTrap::~FragTrap() {
	std::cout << RED << "FragTrap Destructor for " <<
			this->m_name << " has been called" << RESET << std::endl;
}

//----------------------------------------------------------------//

void FragTrap::highFivesGuys(){
	std::cout << this->m_name << " is requesting high-fives!!\n";
}
