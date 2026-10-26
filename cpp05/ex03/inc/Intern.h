#pragma once

#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

class Intern{
	public :
		Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);
		~Intern();

		AForm* makeForm(std::string_view name, std::string_view target);

		class FormNotFoundException : public std::exception{
			public :
				const char* what() const noexcept override;
		};

	private : 
		static AForm* newShrubbery(std::string_view target);
		static AForm* newRobotomy(std::string_view target);
		static AForm* newPardon(std::string_view target);
};
