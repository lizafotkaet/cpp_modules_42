#include "Cat.h"

Cat::Cat() : Animal("cat") {
	std::cout << GREEN << "Cat default constructor called\n" << RESET;
}

Cat::Cat(const Cat& other) : Animal(other){
	std::cout << LIGHTBLUE << "Cat copy constructor called\n" << RESET;
}

Cat& Cat::operator=(const Cat& other){
	if (this != &other){
		Animal::operator=(other);
	}
	std::cout << YELLOW << "Cat copy assignment operator called\n" << RESET;
	return *this;
}

Cat::~Cat(){
	std::cout << RED << "Cat destructor called\n" << RESET;
}

void Cat::makeSound() const{
	std::cout << "*meow meow*\n";
};
