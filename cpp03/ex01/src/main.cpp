#include "ScavTrap.h"

int main() {

	std::cout << "*__________CLAPTRAP_________*\n\n"; 

	{
		ClapTrap	ct1;
		ClapTrap	ct2("Bibik");
		ClapTrap	ct3(ct2);

		ct1 = ct2;

		for (int i = 0; i < 10; i++){
			ct2.attack("Lupa");
		}
		ct2.attack("Bobik");
		ct2.takeDamage(3);
		ct2.takeDamage(5);
		ct2.beRepaired(1);
		ct2.takeDamage(3);
	}

	std::cout << "\n*__________SCAVTRAP_________*\n\n";

	{
		ScavTrap	st1;
		ScavTrap	st2("Pupa");
		ScavTrap	st3(st2);

		st1 = st3;

		st2.attack("Bobik");
		st2.takeDamage(3);
		st2.takeDamage(5);
		st2.beRepaired(1);
		st2.takeDamage(3);

	st3.guardGate();
	}

	return (0);
}
