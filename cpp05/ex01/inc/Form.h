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
		const bool 			getIsSigned() const;
		const int			getSignGrade() const;
		const int			getExecGrade() const;

		class GradeTooHighException : public std::exception{
			public :
				const char* what() const noexcept override;
		};
		class GradeTooLowException : public std::exception{
			public : 
				const char* what() const noexcept override;
		};

		static constexpr int lowestGrade{150};
		static constexpr int highestGrade{1};
	
	private :
		const std::string	m_name;
		bool 				m_isSigned;
		const int			m_signGrade;
		const int			m_execGrade;
};

std::ostream& operator<<(std::ostream& out, const Form& f);
