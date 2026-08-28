#pragma once

#include <iostream>
#include <string>
#include "colors.h"


/*
Any attempt to instantiate a Bureaucrat with an invalid grade must throw an exception:
either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.
*/

class Bureaucrat{
	public	:
		const std::string&	getName() const;
		unsigned int		getGrade() const;
		void				inc(unsigned int grade);
		void				dec(unsigned int grade);

	private :
		const std::string	m_name;
		unsigned int		m_grade;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureacrat); // <name>, bureaucrat grade <grade>