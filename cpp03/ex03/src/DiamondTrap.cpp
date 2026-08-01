#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(std::string_view name) : ClapTrap(std::string(name) + "_clap_name", 100, 50, 30),
			m_nameD(name){
	std::cout << GREEN << "DiamondTrap default constructor for " <<
			this->m_nameD << " has been called\n" << RESET;
}

// here we DO need copy constructor calls for Frag/Scav
// cause otherwise their parts won't get copied bu constructed from scratch
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other),
			ScavTrap(other), m_nameD(other.m_nameD){
	std::cout << LIGHTBLUE << "DiamondTrap Copy constructor for " <<
			this->m_nameD << " has been called\n" << RESET;
}


// ClapTrap directly, NOT FragTrap + ScavTrap: both of those assign the
// shared ClapTrap subobject, so going through them would do it twice
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other){
	if (this != &other) {
		ClapTrap::operator=(other);
		this->m_nameD = other.m_nameD;
	}
	std::cout << YELLOW << "DiamondTrap Copy assignment operator for " <<
					 this->m_nameD << " has been called\n" << RESET;
	return (*this);
}

DiamondTrap::~DiamondTrap(){
	std::cout << RED << "DiamondTrap Destructor for " <<
			this->m_nameD << " has been called\n" << RESET;
}

//--------------------------------------------------------------//

void	DiamondTrap::whoAmI(){
	std::cout << "My name in Diamond: " << this->m_nameD <<
			", and my name in Clap is " << this->m_name << '\n';
}

