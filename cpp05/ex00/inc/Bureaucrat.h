#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <string_view>

#include "colors.h"

#define HIGHEST_GRADE 1
#define LOWEST_GRADE 150

/*
Any attempt to instantiate a Bureaucrat with an invalid grade must throw an exception:
either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.
*/

class Bureaucrat{
	public	:
		Bureaucrat(std::string_view name = "<default>", int grade = 150);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();

		const std::string&	getName() const;
		int					getGrade() const;
		void				incGrade();
		void				decGrade();

		class GradeTooHighException : public std::exception {
			public :
				const char *what() const noexcept;
		};

		class GradeTooLowException : public std::exception {
			public :
				const char *what() const noexcept;
		};

	private :
		const std::string	m_name;
		int		m_grade;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat); // <name>, bureaucrat grade <grade>
