#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string_view target) : 
			AForm("RobotomyRequest", 72, 45), m_target(target) {
	// std::cout << GREEN << "RobotomyRequestForm constructor called for " << m_target << '\n' << RESET;
};

RobotomyRequestForm::~RobotomyRequestForm(){
	// std::cout << RED << "RobotomyRequestForm destructor called for " << "RobotomyRequestForm" << '\n' << RESET;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), m_target(other.m_target){
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
	if (!this->getIsSigned()){
		throw FormNotSignedException();
	}
	if (executor.getGrade() > this->getExecGrade()){
		throw GradeTooLowException();
	}

	/*random device grabs one truly random number from the os, is used once when the program runs
	cause static (can be put anywhere honestly but we don't need it anywhere else)
	gen generates a number with that seed
	*/
	static std::mt19937 gen(std::random_device{}()); // the whole thing is the same as srand(time(NULL))
	/*
		this is like true/false moment (I hate statistics btw) with a 50/50 chance
	*/
    std::bernoulli_distribution coin(0.5);


	std::cout << "* BZZZZZZRRRRR... drilling noises *\n";

	if (coin(gen)){
		std::cout << m_target << " has been robotomized successfully\n";
	}
	else{
		std::cout << "Robotomy on " << m_target << " failed\n";
	}
}

// target getter:

std::string	RobotomyRequestForm::getTarget() const{
	return m_target;
}