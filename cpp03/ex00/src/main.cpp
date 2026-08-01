#include "ClapTrap.h"

int main() {
	ClapTrap ct1;
	ClapTrap ct2("Bibik");
	ClapTrap ct3(ct2);

	ct1 = ct2;

	for (int i = 0; i < 10; i++){
		ct2.attack("Lupa");
	}
	ct2.attack("Bobik");
	ct2.takeDamage(3);
	ct2.takeDamage(5);
	ct2.beRepaired(1);
	ct2.takeDamage(2);

	return (0);
}
