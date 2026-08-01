#include "ScavTrap.h"
#include "FragTrap.h"
#include "DiamondTrap.h"

int main() {

	// std::cout << "*__________CLAPTRAP_________*\n\n"; 

	// {
	// 	ClapTrap	ct1;
	// 	ClapTrap	ct2("Bibik");
	// 	ClapTrap	ct3(ct2);

	// 	ct1 = ct2;

	// 	for (int i = 0; i < 10; i++){
	// 		ct2.attack("Lupa");
	// 	}
	// 	ct2.attack("Bobik");
	// 	ct2.takeDamage(3);
	// 	ct2.takeDamage(5);
	// 	ct2.beRepaired(1);
	// 	ct2.takeDamage(3);
	// }

	// std::cout << "\n*__________SCAVTRAP_________*\n\n";

	// {
	// 	ScavTrap	st1;
	// 	ScavTrap	st2("Pupa");
	// 	ScavTrap	st3(st2);

	// 	st1 = st3;

	// 	st2.attack("Bobik");
	// 	st2.takeDamage(3);
	// 	st2.takeDamage(5);
	// 	st2.beRepaired(1);
	// 	st2.takeDamage(3);

	// 	st3.guardGate();
	// }

	// std::cout << "\n*__________FRAGTRAP_________*\n\n";

	// {
	// 	FragTrap	ft1;
	// 	FragTrap	ft2("Funtik");
	// 	FragTrap	ft3(ft2);

	// 	ft1 = ft3;

	// 	ft2.attack("Bobik");
	// 	ft2.takeDamage(11);
	// 	ft2.takeDamage(2);
	// 	ft2.beRepaired(22);
	// 	ft2.takeDamage(2);

	// 	ft3.highFivesGuys();
	// }

	std::cout << "\n*__________DIAMONDTRAP_________*\n\n";

	DiamondTrap	dt2; // default one
	DiamondTrap	dt1("Sonik");

	dt1.whoAmI();
	dt1.attack("Mimi");
	dt1.takeDamage(20);
	dt1.beRepaired(5);

	std::cout << "\n* COPY *\n";

	DiamondTrap copy(dt1);
	dt2 = dt1;
	dt2.whoAmI();
	
	return (0);
}
