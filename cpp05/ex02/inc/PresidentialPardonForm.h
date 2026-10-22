#pragma once

#include "AForm.h"
#include "Bureaucrat.h"

class PresidentialPardonForm : public AForm {
	public :
		PresidentialPardonForm(std::string_view target = "<target>");
		PresidentialPardonForm(PresidentialPardonForm& other);
		PresidentialPardonForm& operator=(PresidentialPardonForm& other);
		~PresidentialPardonForm();

		std::string	getTarget() const override;

		void    execute(const Bureaucrat& executor) const override;

	private :
		std::string m_target;
};

std::ostream& operator<<(std::ostream& out, const PresidentialPardonForm& f);