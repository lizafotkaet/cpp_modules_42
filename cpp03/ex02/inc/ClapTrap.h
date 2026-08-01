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
		ClapTrap(std::string_view name = "<default>"); // default constructor
		ClapTrap(const ClapTrap& other); // copy constructor 
		ClapTrap& operator=(const ClapTrap& other); // copy assignment operator
		~ClapTrap();
	
		// doing anything costs energy:
	
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		// const std::string&	getName() const;
		// void				setName(std::string_view name);
	
	protected :
		ClapTrap(std::string_view name, int hp, int ep, int ad);
		std::string		m_name;
		int				m_hitPoints; // health points
		int				m_energyPoints; // energy for doing stuff/mana (funny word)
		int				m_attackDamage; // wtf
};

