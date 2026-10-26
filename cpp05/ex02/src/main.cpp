#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main(){

	// AForm f{};
	ShrubberyCreationForm shrub{"28B"}, huyub{"14K"};
	RobotomyRequestForm robotomy{"30A"}, huyotomy{"16L"};
	PresidentialPardonForm pardon{"15D"}, huyardon{"90F"};

	Bureaucrat jim("Jim", 99), bob("Bob", 120), alice("Alice", 120), 
				jan("Jan", 20), kevin("Kevin", 2), pam("Pam", 11);

	std::cout << BUTTERYYELLOW << "\n* THE FORMS (just wtf they are) *\n\n" << RESET;

	std::cout << shrub << "\n";
	std::cout << robotomy << '\n';
	std::cout << pardon << "\n\n";

	std::cout << BUTTERYYELLOW << "\n* THE BUREAUCRATS *the Office intro playing* *\n\n" << RESET;

	std::cout << jim << '\n';
	std::cout << bob << '\n';
	std::cout << alice << '\n';
	std::cout << jan << '\n';


	std::cout << YELLOW << "\n*TESTING SIGNING THE FORMS*\n\n" << RESET;

	std::cout << RED << "---------------fail:\n\n" << RESET;
	bob.signForm(robotomy);
	std::cout << "\n";
	alice.signForm(pardon);
	std::cout << "\n\n";
	
	std::cout << GREEN << "---------------success:\n\n" << RESET;
	jim.signForm(shrub);
	jan.signForm(robotomy);
	kevin.signForm(pardon);

	std::cout << '\n';

	std::cout << BUTTERYYELLOW << "---------------forms after signing:\n\n" << RESET;

	std::cout << shrub << '\n';
	std::cout << robotomy << '\n';
	std::cout << pardon << '\n';

	std::cout << YELLOW << "\n*TESTING EXECUTING THE FORMS*\n\n" << RESET;

	std::cout << RED << "---------------fail:\n\n" << RESET;

	jim.executeForm(huyub); // not signed
	std::cout << '\n';
	bob.executeForm(robotomy); // grade too low
	std::cout << '\n';
	alice.executeForm(pardon); // same

	std::cout << GREEN << "\n---------------success:\n\n" << RESET;

	std::cout << shrub << '\n';
	
	bob.executeForm(shrub);
	std::ifstream tree(shrub.getTarget() + "_shrubbery");

	if (tree){
		std::cout << LIGHTGREEN << tree.rdbuf() << RESET << "\n\n";
	}
	else{
		std::cout << "couldn't open " << shrub.getTarget() << "_shrubbery" << '\n';
	}

	jan.executeForm(robotomy);
	std::cout << "\n";
	pam.executeForm(robotomy);
	std::cout << "\n";
	kevin.executeForm(pardon);


	std::cout << BUTTERYYELLOW << "\n*DESTROYING EVERYTHING*\n\n" << RESET;

	return 0;
}