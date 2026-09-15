#include "Form.h"

Form::Form(std::string_view name, int signGrade, int execGrade) :  m_name(name), 
			m_signGrade(signGrade), m_execGrade(execGrade), m_isSigned(false){
	if (m_signGrade < highestGrade){
		throw Form::GradeTooHighException();
	}
	if (m_signGrade > lowestGrade){
		throw Form::GradeTooLowException();
	}

	std::cout << GREEN << "Form constructor called for " << m_name << '\n' << RESET;
}

Form::~Form(){
	std::cout << RED << "Form destructor called for " << m_name << '\n' << RESET;
}

Form::Form(const Form& other) : m_name(other.m_name), 
			m_signGrade(other.m_signGrade), m_execGrade(other.m_execGrade), m_isSigned(false){
		std::cout << LIGHTBLUE << "Form copy constructor called for " << m_name << '\n' << RESET;
}

Form& Form::operator=(const Form& other){
	std::cout << YELLOW << "Form copy assignment operator called for " << m_name << '\n' << RESET;
	if (this != &other){
		m_isSigned = other.m_isSigned;
	}
	return *this;
}

// getters:

const std::string&	Form::getName() const{
	return m_name;
}

const bool 			Form::getIsSigned() const{
	return m_isSigned;
}

const int			Form::getSignGrade() const{
	return m_signGrade;
}

const int			Form::getExecGrade() const{
	return m_execGrade;
}

// exceptions:

const char* Form::GradeTooHighException::what() const noexcept{
	return "form: grade too high";
}

const char* Form::GradeTooLowException::what() const noexcept{
	return "form: grade too low";
}

/*changes the form’s status to signed if the bureaucrat’s grade is high enough
(greater than or equal to the required one). Remember, grade 1 is higher than grade 2.
If the grade is too low, throw a Form::GradeTooLowException*/

void Form::beSigned(const Bureaucrat& b){
	if (b.getGrade() > this->m_signGrade){
		throw Form::GradeTooLowException();
	}
	m_isSigned = true;
}

std::ostream& operator<<(std::ostream& out, const Form& f){
	out << "Form " << f.getName() << (f.getIsSigned() ? "signed; " : "not signed; ")
		<< "(grade required to sign: " << f.getSignGrade()
		<< ", grade required to execute: " << f.getExecGrade() << ')';
}
