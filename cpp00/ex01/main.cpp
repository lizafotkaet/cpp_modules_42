#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook   phonebook;
    std::string line;

	std::cout << "Available commands: ADD, SEARCH, EXIT" << '\n';
	while (true)
	{
		std::cout << "Enter command -> ";
		if (!getline(std::cin, line) || line.length() == 0){
			if (std::cin.eof()){
				std::cout << "\nEOF\n";
				return exit(EXIT_FAILURE), 1;
			}
			std::cout << "Error: enter a valid command.\n";
			continue ;
		}
		if (line == "EXIT")
			return (0);
		if (line == "ADD")
			phonebook.addNewContact();
		if (line == "SEARCH")
			phonebook.searchContact();
	}
	return (0);
}
