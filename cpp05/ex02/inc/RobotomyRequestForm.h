#pragma once

#include "AForm.h"
#include "Bureaucrat.h"
#include <random>

class RobotomyRequestForm : public AForm {
	public :
		RobotomyRequestForm(std::string_view target = "<target>");
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		~RobotomyRequestForm();

		std::string	getTarget() const override;

		void		execute(const Bureaucrat& executor) const override;

	private :
		std::string m_target;
};
