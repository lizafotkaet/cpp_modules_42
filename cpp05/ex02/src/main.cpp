#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main(){

	// AForm f{};
	ShrubberyCreationForm shrub{"28B"}, huyub{"14K"};
	RobotomyRequestForm robotomy{"30A"}, huyotomy{"16L"};
	PresidentialPardonForm pardon{"15D"}, huyardon{"90F"};

	Bureaucrat jim("Jim", 99);
	Bureaucrat bob("Bob", 120);
	Bureaucrat alice("Alice", 120);
	Bureaucrat jan("Jan", 20);

	std::cout << BUTTERYYELLOW << "\n*THE FORMS (just wtf they are)*\n\n" << RESET;

	std::cout << shrub << "\n";
	std::cout << robotomy << '\n';
	std::cout << pardon << "\n\n";

	std::cout << jim << '\n';
	std::cout << bob << '\n';
	std::cout << alice << '\n';
	std::cout << jan << '\n';


	std::cout << BUTTERYYELLOW << "\n*TESTING SIGNING THE FORMS*\n\n" << RESET;

	// success
	jim.signForm(shrub);
	// fail
	bob.signForm(robotomy);
	std::cout << "\n";
	alice.signForm(pardon);
	std::cout << "\n";




	std::cout << BUTTERYYELLOW << "\n*TESTING EXECUTING THE FORMS*\n\n" << RESET;

	std::cout << shrub << '\n';
	
	bob.executeForm(shrub);

	std::cout << BUTTERYYELLOW << "\n*DESTROYING EVERYTHING*\n\n" << RESET;

	return 0;
}