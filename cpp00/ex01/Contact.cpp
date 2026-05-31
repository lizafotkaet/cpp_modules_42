#include "Contact.hpp"
#include "PhoneBook.hpp"
 
Contact::Contact() : index{-1} {};

std::string promptArg(std::string argName){
	std::string line;

	while (line == ""){
		std::cout << "Enter the " << argName << ": ";
		if (!getline(std::cin, line) || std::cin.eof()){
			std::cout << "Field can't be empty. Try again\n";
		}
	}
	return (line);
}

void Contact::setContact(int i){
	index = i;

	first_name = promptArg("first name");
	last_name = promptArg("last name");
	nickname = promptArg("nickname");
	phone_number = promptArg("phone number");
	darkest_secret = promptArg("darkest secret"); 
}

void Contact::printContactFull(){
    std::cout << std::setw(10) << 42 << '\n';

	std::cout << index;
	std::cout << first_name;
	std::cout << last_name;
	std::cout << nickname;
	std::cout << phone_number;
	std::cout << darkest_secret;
};

void Contact::printContactShort(){
	std::cout << index;
	std::cout << first_name;
	std::cout << last_name;
	std::cout << nickname;
};
