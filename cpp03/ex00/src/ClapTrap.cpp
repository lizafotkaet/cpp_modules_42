#include "ClapTrap.h"

// ClapTrap::ClapTrap(std::string_view name) :
// 		m_name(name), m_hitPoints(10), m_energyPoints(10), m_attackDamage(0){
// 	std::cout << GREEN << "ClapTrap Default constructor for " <<
// 			this->m_name << " has been called\n" << RESET;
// }

ClapTrap::ClapTrap(std::string_view name, int hitPoints, int energyPoints, int attackDamage) : 
		m_name(name), m_hitPoints(hitPoints), m_energyPoints(energyPoints), m_attackDamage(attackDamage){
	std::cout << GREEN << "ClapTrap Default constructor for " <<
			this->m_name << " has been called\n" << RESET;
}

ClapTrap::ClapTrap(const ClapTrap& other) : m_name(other.m_name), m_hitPoints(other.m_hitPoints), 
		m_energyPoints(other.m_energyPoints), m_attackDamage(other.m_attackDamage){
	std::cout << LIGHTBLUE << "ClapTrap Copy constructor for " <<
			this->m_name << " has been called\n" << RESET;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	if (this != &other) {
		this->m_name = other.m_name;
		this->m_hitPoints = other.m_hitPoints;
		this->m_energyPoints = other.m_energyPoints;
		this->m_attackDamage = other.m_attackDamage;
	}
	std::cout << YELLOW << "ClapTrap Copy assignment operator for " <<
					 this->m_name << " has been called\n" << RESET;
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << RED << "ClapTrap Destructor for " <<
			this->m_name << " has been called\n" << RESET;
}

//--------------------------------------------------------------//

void	ClapTrap::attack(const std::string& target){
	if (this->m_energyPoints == 0){
		std::cout << "No energy to attack :c\n";
	}
	else if(this->m_hitPoints == 0){
		std::cout << "No hit points left, I'm dead :c\n";
	}
	else{
		std::cout << "ClapTrap " << this->m_name << " attacks "
					<< target << ", causing " << this->m_attackDamage
						<< " points of damage!\n";
		--(this->m_energyPoints);
	}
	std::cout << PINK << "Current stats: \nHP: " << this->m_hitPoints <<
		"\nEP: " << this->m_energyPoints << '\n' << RESET;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->m_hitPoints == 0){
		std::cout << "I'm already ded :c\n";
	}
	else{
		std::cout << "ClapTrap " << this->m_name << " takes "
			<< amount << " points of damage\n";
		this->m_hitPoints -=amount;
		if (m_hitPoints <= 0){
			std::cout << "I died :C\n";
			this->m_hitPoints = 0;
		}
	}
	std::cout << PINK << "Current stats: \nHP: " << this->m_hitPoints <<
		"\nEP: " << this->m_energyPoints << '\n' << RESET;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->m_energyPoints == 0){
		std::cout << "No energy to heal :c\n";
	}
	else if(this->m_hitPoints == 0){
		std::cout << "Can't be healed, I'm ded :c\n";
	}
	else{
		std::cout << "ClapTrap " << this->m_name << " gets repaired by "
					<< amount << " of HP\n";
		this->m_hitPoints += amount;
		--(this->m_energyPoints);
	}
	std::cout << PINK << "Current stats: \nHP: " << this->m_hitPoints <<
		"\nEP: " << this->m_energyPoints << '\n' << RESET;
}
