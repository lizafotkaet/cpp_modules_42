#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string_view target) : AForm("PresidentialPardonForm", 25, 5), m_target(target) {
	std::cout << GREEN << "PresidentialPardonForm constructor called for " << m_target << '\n' << RESET;
};

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << RED << "PresidentialPardonForm destructor called for " << "PresidentialPardonForm" << '\n' << RESET;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : 
			AForm(other), m_target(other.m_target){
		std::cout << LIGHTBLUE << "PresidentialPardonForm copy constructor called for " << "PresidentialPardonForm" << '\n' << RESET;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other){
	std::cout << YELLOW << "PresidentialPardonForm copy assignment operator called for " << "PresidentialPardonForm" << '\n' << RESET;
	if (this != &other){
		AForm::operator=(other);
		this->m_target = other.m_target;
	}
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const{
	try{

	}
	catch(std::exception& e){

	}
}

std::string	PresidentialPardonForm::getTarget() const{
	return m_target;
}