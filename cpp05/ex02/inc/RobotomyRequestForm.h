#pragma once

#include "AForm.h"
#include "Bureaucrat.h"

class RobotomyRequestForm : public AForm {
	public :
		RobotomyRequestForm(std::string_view target = "<target>");
		RobotomyRequestForm(RobotomyRequestForm& other);
		RobotomyRequestForm& operator=(RobotomyRequestForm& other);
		~RobotomyRequestForm();

		std::string	getTarget() const override;

		void		execute(const Bureaucrat& executor) const override;

	private :
		std::string m_target;
};

std::ostream& operator<<(std::ostream& out, const RobotomyRequestForm& f);