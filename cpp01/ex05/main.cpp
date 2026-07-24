#include "Harl.hpp"

int main()
{
	// Harl harl;

	// harl.complain("INFO");
	// harl.complain("DEBUG");
	// harl.complain("ERROR");
	// harl.complain("WARNING");
	// harl.complain("random input");

	Harl harl;
	std::string levels[] = {"INFO", "DEBUG", "ERROR", "WARNING"};

	for (int i = 0; i < 4; i++)
	{
		harl.complain(levels[i]);
		std::cout << '\n';
		std::cout << RED << "Press ENTER to continue..." << RESET << '\n';
		std::cin.get();
	}

	return 0;
}
