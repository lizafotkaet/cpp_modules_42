#include "Intern.h"

Intern::Intern(){
	// std::cout << GREEN << "Intern constructor called" << '\n' << RESET;
}

Intern::~Intern(){
	// std::cout << RED << "Intern destructor called" << '\n' << RESET;
}

Intern::Intern(const Intern& other){
	static_cast<void>(other);
	std::cout << LIGHTBLUE << "Intern copy constructor called" << '\n' << RESET;
}

Intern& Intern::operator=(const Intern& other){
	std::cout << YELLOW << "Intern copy assignment operator called" << '\n' << RESET;
	if (this != &other){
		*this = other;
	}
	return *this;
}

AForm* Intern::makeForm(std::string_view name, std::string_view target){
	const std::string names[3] = {
			"ShrubberyCreation",
			"RobotomyRequest",
			"PresidentialPardon"
			};

	// there's no parameter name cause we only describe the type of a ft
	AForm* (*forms[3])(const std::string_view) = {
			&newShrubbery, 
			&newRobotomy, 
			&newPardon
			};
	
	try{
		for (int i{}; i < 3; i++){
			if (name == names[i]){
				std::cout << "Intern creates " << name << '\n';
				return forms[i](target);
			}
		}
		throw FormNotFoundException();
	}
	catch(std::exception& e){
		std::cout << "Intern cannot create \"" << name << "\" because: " << e.what() << '\n';
	}
	return nullptr;
}

AForm* Intern::newShrubbery(std::string_view target){ 
	return new ShrubberyCreationForm(target); 
}
AForm* Intern::newRobotomy(std::string_view target){ 
	return new RobotomyRequestForm(target); 
}
AForm* Intern::newPardon(std::string_view target){
	return new PresidentialPardonForm(target); 
}

const char* Intern::FormNotFoundException::what() const noexcept{
	return "form not found";
}