#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string_view target) : AForm("RobotomyRequestForm", 72, 45), m_target(target) {
	std::cout << GREEN << "RobotomyRequestForm constructor called for " << m_target << '\n' << RESET;
};

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << RED << "RobotomyRequestForm destructor called for " << "RobotomyRequestForm" << '\n' << RESET;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), m_target(other.target){
		std::cout << LIGHTBLUE << "RobotomyRequestForm copy constructor called for " << "RobotomyRequestForm" << '\n' << RESET;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
	std::cout << YELLOW << "RobotomyRequestForm copy assignment operator called for " << "RobotomyRequestForm" << '\n' << RESET;
	if (this != &other){
		AForm::operator=(other);
		this->m_target = other.m_target;
	}
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const{
	try{

	}
	catch(std::exception& e){

	}
}

// target getter:

std::string	RobotomyRequestForm::getTarget() const{
	return m_target;
}