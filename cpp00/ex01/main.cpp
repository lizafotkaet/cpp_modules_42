#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(int ac, char **av)
{
    PhoneBook   phonebook;
    std::string line;

    if (ac != 2)
        return (1);
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	while (true)
	{
		std::cout << "Enter command -> ";
		if (!getline(std::cin, line) || std::cin.eof())
			return (0);
		if (line == "EXIT")
			return (0);
		if (line == "ADD")
			AddNewContact(pb);
		if (line == "SEARCH")
			SearchContact(pb);
	}
	return (0);
}
