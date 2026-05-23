#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <thread>
#include <chrono>

int main(int ac, char **av)
{
    // PhoneBook   phonebook;
    // std::string line;

	(void)ac;
	(void)av;
    // if (ac != 2)
    //     return (1);
	// std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	// while (true)
	// {
	// 	std::cout << "Enter command -> ";
	// 	if (!getline(std::cin, line) || std::cin.eof())
	// 		return (0);
	// 	if (line == "EXIT")
	// 		return (0);
	// 	if (line == "ADD")
	// 		phonebook.addNewContact();
	// 	if (line == "SEARCH")
	// 		phonebook.searchContact();
	// }
	std::string line1;
	std::string line2;
	
	std::cout << "Enter a line of text: ";

	// std::cin >> line1 >> line2;
	std::getline(std::cin >> std::ws, line1);
	std::getline(std::cin >> std::ws, line2);
	std::cout << "You entered:\n" << line1 << "\nand\n" << line2 << std::endl;
	return (0);
}
