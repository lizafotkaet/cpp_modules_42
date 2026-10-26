#include "Bureaucrat.h"
#include "Form.h"

int main(){
	Form f{};
	Form f1{"28B", 100, 100};
	Form f2{"30A", 120, 80};
	Form f3{"15D", 50, 40};
	Bureaucrat b("Jim", 99);
	Bureaucrat b1("Bob", 120);
	Bureaucrat b2 ("Alice", 120);
	Bureaucrat b3 ("Jan", 50);

	std::cout << BUTTERYYELLOW << "\n*THE FORMS (just wtf they are)*\n\n" << RESET;

	std::cout << f << "\n";
	std::cout << f1 << '\n';
	std::cout << f2 << '\n';
	std::cout << f3 << '\n';

	std::cout << BUTTERYYELLOW << "\n*TESTING SIGNING THE FORM*\n\n" << RESET;

	std::cout << BUTTERYYELLOW << "\n   --TESTING beSigned (Form method):\n\n" << RESET;
	
	// fail: exception thrown
	try{
		f1.beSigned(b1);
	}
	catch (std::exception& e){
		std::cout << e.what() << '\n';
	}

	// success!
	try{
		f3.beSigned(b3);
		std::cout << f3 << '\n';
	}
	catch (std::exception& e){
		std::cout << e.what() << '\n';
	}

	std::cout << BUTTERYYELLOW << "\n   --TESTING signForm (Bureaucrat method):\n\n" << RESET;
	
	b1.signForm(f1);
	b2.signForm(f2); 


	std::cout << BUTTERYYELLOW << "\n*DESTROYING EVERYTHING*\n\n" << RESET;
	return 0;
}