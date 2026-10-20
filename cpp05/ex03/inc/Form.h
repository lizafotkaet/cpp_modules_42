#pragma once

#include "Bureaucrat.h"

class Bureaucrat;

class Form{
	public :
		Form(std::string_view name = "<default>", int signGrade = 1, int execGrade = 1);
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();

		void	beSigned(const Bureaucrat& b);

		const std::string&	getName() const;
		bool 				getIsSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		class GradeTooHighException : public std::exception{
			public :
				const char* what() const noexcept override;
		};
		class GradeTooLowException : public std::exception{
			public : 
				const char* what() const noexcept override;
		};

		static const int 	lowestGrade{150};
		static const int 	highestGrade{1};
	
	private :
		const std::string	m_name;
		const int			m_signGrade;
		const int			m_execGrade;
		bool 				m_isSigned;
};

std::ostream& operator<<(std::ostream& out, const Form& f);
