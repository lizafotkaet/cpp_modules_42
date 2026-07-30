#pragma once

#include <iostream>
#include <string>
#include <string_view>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define LIGHTBLUE "\033[94m"
#define YELLOW "\033[33m"
#define PINK "\033[95m"
#define RESET "\033[0m"


class ClapTrap {
		
	public :
		ClapTrap(std::string_view name = "<default>", int hitPoints = 10, int energyPoints = 10,
			int attackDamage = 0); // default constructor
		ClapTrap(const ClapTrap& other); // copy constructor 
		ClapTrap& operator=(const ClapTrap& other); // copy assignment operator
		~ClapTrap();
	
		// doing anything costs energy:
	
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	
	private :
		std::string		m_name;
		int				m_hitPoints; // health points
		unsigned int	m_energyPoints; // energy for doing stuff/mana (funny word)
		unsigned int	m_attackDamage; // wtf

};

