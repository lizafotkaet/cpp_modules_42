#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(std::string_view target) : 
			AForm("ShrubberyCreationForm", 145, 137), m_target(target) {
	std::cout << GREEN << "ShrubberyCreationForm constructor called for " << m_target << '\n' << RESET;
};

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << RED << "ShrubberyCreationForm destructor called for " << "ShrubberyCreationForm" << '\n' << RESET;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : 
			AForm(other), m_target(other.m_target){
		std::cout << LIGHTBLUE << "ShrubberyCreationForm copy constructor called for " << "ShrubberyCreationForm" << '\n' << RESET;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
	std::cout << YELLOW << "ShrubberyCreationForm copy assignment operator called for " << "ShrubberyCreationForm" << '\n' << RESET;
	if (this != &other){
		AForm::operator=(other);
		this->m_target = other.m_target;
	}
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
	if (!this->getIsSigned()){
		throw FormNotSignedException();
	}
	if (executor.getGrade() > this->getExecGrade()){
		throw GradeTooLowException();
	}

	std::ofstream file(getTarget() + "_shrubbery");
	if (!file){
		throw std::runtime_error("could not open file");
	}
	// convert tree to raw string literal (with R"TREE( ... )TREE: inside R"(...)" everything is treated literally)
	file << R"TREE(                 &&& &&  & && 
             && &\/&\|& ()|/ @, &&
             &\/(/&/&||/& /_/)_&/_&
          &() &\/&|()|/&\/ '%' & ()
         &_\_&&_\ |& |&&/&__%_/_& &&
       &&   && & &| &| /& & % ()& /&&
        ()&_---()&\&\|&&-&&--%---()~
            &&     \|||
                    |||
                    |||
                    |||
              , -=-~  .-^- _
)TREE";
}

// target getter:

std::string	ShrubberyCreationForm::getTarget() const{
	return m_target;
}