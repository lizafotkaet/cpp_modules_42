#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main(){

	// AForm f{};
	ShrubberyCreationForm shrub{"28B"};
	RobotomyRequestForm robotomy{"30A"};
	PresidentialPardonForm pardon{"15D"};
	Bureaucrat jim("Jim", 99);
	Bureaucrat bob("Bob", 120);
	Bureaucrat alice("Alice", 120);
	Bureaucrat jan("Jan", 50);

	std::cout << BUTTERYYELLOW << "\n*THE FORMS (just wtf they are)*\n\n" << RESET;

	std::cout << shrub << "\n";
	std::cout << robotomy << '\n';
	std::cout << pardon << "\n\n";

	std::cout << jim << '\n';
	std::cout << bob << '\n';
	std::cout << alice << '\n';
	std::cout << jan << '\n';


	std::cout << BUTTERYYELLOW << "\n*TESTING SIGNING THE FORM*\n\n" << RESET;

	std::cout << BUTTERYYELLOW << "\n   --TESTING beSigned (Form method):\n\n" << RESET;
	


	std::cout << BUTTERYYELLOW << "\n   --TESTING signForm (Bureaucrat method):\n\n" << RESET;
	


	std::cout << BUTTERYYELLOW << "\n*DESTROYING EVERYTHING*\n\n" << RESET;

	return 0;
}