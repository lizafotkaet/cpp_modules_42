#include "AForm.h"

AForm::AForm(std::string_view name, int signGrade, int execGrade) : m_name(name), 
			m_signGrade(signGrade), m_execGrade(execGrade), m_isSigned(false){
	if (m_signGrade < highestGrade){
		throw AForm::GradeTooHighException();
	}
	if (m_signGrade > lowestGrade){
		throw AForm::GradeTooLowException();
	}

	std::cout << GREEN << "AForm constructor called for " << m_name << '\n' << RESET;
}

AForm::~AForm(){
	std::cout << RED << "AForm destructor called for " << m_name << '\n' << RESET;
}

AForm::AForm(const AForm& other) : m_name(other.m_name), 
			m_signGrade(other.m_signGrade), m_execGrade(other.m_execGrade), m_isSigned(false){
		std::cout << LIGHTBLUE << "AForm copy constructor called for " << m_name << '\n' << RESET;
}

AForm& AForm::operator=(const AForm& other){
	std::cout << YELLOW << "AForm copy assignment operator called for " << m_name << '\n' << RESET;
	if (this != &other){
		m_isSigned = other.m_isSigned;
	}
	return *this;
}

// getters:

const std::string&	AForm::getName() const{
	return m_name;
}

bool 				AForm::getIsSigned() const{
	return m_isSigned;
}

int					AForm::getSignGrade() const{
	return m_signGrade;
}

int					AForm::getExecGrade() const{
	return m_execGrade;
}

// AForm exceptions:

const char* 		AForm::GradeTooHighException::what() const noexcept{
	return "form: grade too high";
}

const char* 		AForm::GradeTooLowException::what() const noexcept{
	return "form: grade too low";
}

/*changes the form’s status to signed if the bureaucrat’s grade is high enough
(greater than or equal to the required one). Remember, grade 1 is higher than grade 2.
If the grade is too low, throw a AForm::GradeTooLowException*/

void 				AForm::beSigned(const Bureaucrat& b){
	if (b.getGrade() > this->m_signGrade){
		throw AForm::GradeTooLowException();
	}
	m_isSigned = true;
}

// -----------------------insertion operator overload with the target field added----------------------------- //

std::ostream& 		operator<<(std::ostream& out, const AForm& f){
	out << "Form " << f.getName() << (f.getIsSigned() ? " signed " : " not signed ")
		<< "(grade required to sign: " << f.getSignGrade()
		<< ", grade required to execute: " << f.getExecGrade()
			<< ", target: " << f.getTarget() << ')';

	return out;
}
