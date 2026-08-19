#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal("cat") {
	std::cout << GREEN << "WrongCat default constructor called\n" << RESET;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){
	std::cout << LIGHTBLUE << "WrongCat copy constructor called\n" << RESET;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
	if (this != &other){
		WrongAnimal::operator=(other);
	}
	std::cout << YELLOW << "WrongCat copy assignment operator called\n" << RESET;
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << RED << "WrongCat destructor called\n" << RESET;
}

void WrongCat::makeSound() const{
	std::cout << "*bad kitty noises*\n";
};
