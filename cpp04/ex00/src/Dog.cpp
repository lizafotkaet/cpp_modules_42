#include "Dog.h"

Dog::Dog() : Animal("dog") {
	std::cout << GREEN << "Dog default constructor called\n" << RESET;
}

Dog::Dog(const Dog& other) : Animal(other){
	std::cout << LIGHTBLUE << "Dog copy constructor called\n" << RESET;
}

Dog& Dog::operator=(const Dog& other){
	if (this != &other){
		Animal::operator=(other);
	}
	std::cout << YELLOW << "Dog copy assignment operator called\n" << RESET;
	return *this;
}

Dog::~Dog(){
	std::cout << RED << "Dog destructor called\n" << RESET;
}

void Dog::makeSound() const{
	std::cout << "*woof woof*\n";
};
