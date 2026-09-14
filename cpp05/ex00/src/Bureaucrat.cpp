#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(std::string_view name, int grade) : m_name(name) {
	if (grade < HIGHEST_GRADE){
		throw Bureaucrat::GradeTooHighException();
	}
	if (grade > LOWEST_GRADE){
		throw Bureaucrat::GradeTooLowException();
	}
	m_grade = grade;
	std::cout << GREEN << "Bureaucrat constructor called for " << m_name << '\n' << RESET;
}

Bureaucrat::~Bureaucrat(){
	std::cout << RED << "Bureaucrat destructor called for " << m_name << '\n' << RESET;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : m_name(other.m_name), m_grade(other.m_grade){
	std::cout << LIGHTBLUE << "Bureaucrat copy constructor called for " << m_name << '\n' << RESET;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
	std::cout << YELLOW << "Bureaucrat copy assignment operator called for " << m_name << '\n' << RESET;
	if (this != &other){
		// m_name = other.m_name; // name is a const so idk
		m_grade = other.m_grade;
	}
	return *this;
}

void	Bureaucrat::incGrade(){
	--m_grade;
	if (m_grade < HIGHEST_GRADE){
		throw Bureaucrat::GradeTooHighException();
	}
}

void	Bureaucrat::decGrade(){
	++m_grade;
	if (m_grade > LOWEST_GRADE){
		throw Bureaucrat::GradeTooLowException();
	}
}

// exceptions:

const char* Bureaucrat::GradeTooHighException::what() const noexcept{
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const noexcept{
	return "Grade too low";
}

// getters:

const std::string&	Bureaucrat::getName() const{
	return this->m_name;
}

int		Bureaucrat::getGrade() const{
	return this->m_grade;
}

// insertion operator overload: 

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureacrat){
	out << bureacrat.getName() << ", bureaucrat grade " << bureacrat.getGrade();

	return out;
}
