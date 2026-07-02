#include "Zombie.hpp"

int main() {
	Zombie* z1 = newZombie("Bibik");

	if (z1 == nullptr){
		std::cerr << "Failed allocating\n";
		return 1;
	}

	z1->announce();
	delete z1;

	randomChump("Bobik");

	return 0;
}
