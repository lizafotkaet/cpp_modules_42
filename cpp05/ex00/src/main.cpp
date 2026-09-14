#include "Bureaucrat.h"

int main(){

	std::cout << PINK << "\n------**BUREAUCRATIC TESTS**------\n" << RESET;

	std::cout << BUTTERYYELLOW << "\n*TESTING BOB WITH OK VALUES:*\n\n" << RESET;

	try{
		Bureaucrat b1("Bob", 140);
		std::cout << "Upon construction: " << b1 << '\n';

		b1.decGrade();
		std::cout << "After decrementing: " << b1 << '\n';
		b1.incGrade();
		std::cout << "After incrementing: " << b1 << '\n';

		std::cout << "Going beyond the range with decrementing: ";
		for (int i{}; i <= 10; i++){ // exception is thrown at the last iteration, handled by the catch block
			b1.decGrade();
		}
		std::cout << "After the loop: " << b1 << '\n'; // never printed
	}
	catch(std::exception& e){
		std::cout << "Error: " << e.what() << '\n';
	}

	std::cout << BUTTERYYELLOW << "\n*TESTING ALICE WITH OK VALUES:*\n\n" << RESET;

	try{
		Bureaucrat b2 ("Alice", 148);

		std::cout << "Upon construction: " << b2 << '\n';
		std::cout << "Decrementing Alice's grade to the lowest: ";
		b2.decGrade();
		b2.decGrade();
		std::cout << b2 << '\n';

	}
	catch(std::exception& e){ // we never get here
		std::cout << "Error: " << e.what() << '\n';
	}

	std::cout << BUTTERYYELLOW << "\n*TESTING JAN WITH OK VALUES:*\n\n" << RESET;

	try{
		Bureaucrat b3 ("Jan", 3);

		std::cout << "Upon construction: " << b3 << '\n';
		std::cout << "Incrementing Jan's grade to the highest: ";
		b3.incGrade();
		b3.incGrade();
		std::cout << b3 << '\n';
		std::cout << "Going outside the range with incrementing: ";
		b3.incGrade();
		std::cout << b3 << '\n'; // never gets printed
	}
	catch(std::exception& e){
		std::cout << "Error: " << e.what() << '\n';
	}

	std::cout << BUTTERYYELLOW << "\n*TESTING JIM WITH TOO HIGH A GRADE:*\n\n" << RESET;
	try{
		Bureaucrat b4("Jim", 0); // never gets constructed
	}
	catch(std::exception& e){
		std::cout << "Error: " << e.what() << '\n';
	}

	std::cout << BUTTERYYELLOW << "\n*TESTING GREG WITH TOO LOW A GRADE:*\n\n" << RESET;

	try{
		Bureaucrat b5("Greg", 151); // never gets constructed
	}
	catch(std::exception& e){
		std::cout << "Error: " << e.what() << '\n';
	}


	return 0;
}