#pragma once

#include "Bureaucrat.h"

class Bureaucrat;

class AForm{
	public :
		AForm(std::string_view name = "<default>", int signGrade = 1, int execGrade = 1);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm();

		void				beSigned(const Bureaucrat& b);

		virtual void		execute(Bureaucrat const & executor) const = 0;

		const std::string&	getName() const;
		bool 				getIsSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		virtual std::string	getTarget() const = 0;

		class GradeTooHighException : public std::exception{
			public :
				const char* what() const noexcept override;
		};
		class GradeTooLowException : public std::exception{
			public : 
				const char* what() const noexcept override;
		};
		class FormNotSignedException : public std::exception{
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

std::ostream& operator<<(std::ostream& out, const AForm& f);
