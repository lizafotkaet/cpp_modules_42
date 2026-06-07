#include "Zombie.hpp"

int main() {
	Zombie* z1 = newZombie("Bibik");
	z1->announce();
	delete z1;

	randomChump("Bobik");

	return 0;
}
