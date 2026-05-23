#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::phone_number(Contact &contact)
{
	std::string line;
	while (true)
	{
		std::cout << "ENTER PHONE NUMBER: ";
		if (!std::getline(std::cin >> std::ws, line))
			exit(0);
		int i = 0;
		while (i < (int)line.length() && std::isdigit(line[i]))
			i++;
		if (i == (int)line.length() && line.length() >= 10 && line.length() <= 15)
		{
			contact.set_phone(line);
			break;
		}
		else
			std::cout << "Enter a valid phone number (10-15 digits only)\n";
	}
}