#include "Intern.h"

int main(){

	Intern dummy, silly, sorry;

	std::cout << BUTTERYYELLOW << "\n* INTERNS CREATING FORMS *\n\n" << RESET;

	AForm* shrub{dummy.makeForm("ShrubberyCreation", "bender")};
	AForm* robotomy{silly.makeForm("RobotomyRequest", "home")};
	AForm* pardon{sorry.makeForm("PresidentialPardon", "office")};

	std::cout << BUTTERYYELLOW << "\n* DUMMY TRIES TO CREATE A NONEXISTENT FORM LMAOOO *\n\n" << RESET;
	AForm* fail{dummy.makeForm("StupidForm", "Mars")};

	//silencing the fk compile error message (how visible is it that I hate this module??)
	static_cast<void>(fail);

	std::cout << BUTTERYYELLOW << "\n* DELETING FORMS *\n\n";

	delete shrub;
	delete robotomy;
	delete pardon;
	// delete fail;

	return 0;
}