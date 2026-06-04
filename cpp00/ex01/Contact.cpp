#include "Contact.hpp"
#include "PhoneBook.hpp"
 
Contact::Contact() : index{-1} {};

std::string promptArg(std::string argName){
	std::string line;

	while (line == ""){
		std::cout << "Enter the " << argName << ": ";
		if (!getline(std::cin, line) || line.length() == 0){
			if (std::cin.eof()){
				std::cout << "\nEOF\n";
				return exit(EXIT_FAILURE), "";
			}
			std::cout << "Field can't be empty. Try again\n";
		}
	}
	return (line);
}

void Contact::setContact(int i){
	index = i;

	first_name = promptArg("first name");
	if (first_name == "")
		return ;
	last_name = promptArg("last name");
	if (last_name == "")
		return ;
	nickname = promptArg("nickname");
	if (nickname == "")
		return ;
	phone_number = promptArg("phone number");
	if (phone_number == "")
		return ;
	darkest_secret = promptArg("darkest secret");
	if (darkest_secret == "")
		return ;
}

static std::string formatField(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Contact::printContactShort()
{
    std::cout << std::setw(10) << index << "|";
    std::cout << std::setw(10) << formatField(first_name) << "|";
    std::cout << std::setw(10) << formatField(last_name) << "|";
    std::cout << std::setw(10) << formatField(nickname) << '\n';
}

void Contact::printContactFull()
{
    std::cout << "Index: " << index << '\n';
    std::cout << "First name: " << first_name << '\n';
    std::cout << "Last name: " << last_name << '\n';
    std::cout << "Nickname: " << nickname << '\n';
    std::cout << "Phone number: " << phone_number << '\n';
    std::cout << "Darkest secret: " << darkest_secret << '\n';
}

