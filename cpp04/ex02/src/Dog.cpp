#include "Dog.h"

Dog::Dog() : AAnimal("dog"), m_brain(new Brain()) {
	std::cout << GREEN << "Dog default constructor called\n" << RESET;
}

Dog::Dog(const Dog& other) : AAnimal(other), m_brain(new Brain(*other.m_brain)){
	std::cout << LIGHTBLUE << "Dog copy constructor called\n" << RESET;
}

Dog& Dog::operator=(const Dog& other){
	if (this != &other){
		AAnimal::operator=(other);
		*this->m_brain = *other.m_brain;
	}
	std::cout << YELLOW << "Dog copy assignment operator called\n" << RESET;
	return *this;
}

Dog::~Dog(){
	delete this->m_brain;
	std::cout << RED << "Dog destructor called\n" << RESET;
}

void Dog::makeSound() const{
	std::cout << "*woof woof*\n";
}

// exposed so the tests can prove the copy owns a separate Brain

void Dog::setIdea(int i, const std::string &idea){
	this->m_brain->setIdea(i, idea);
}

std::string Dog::getIdea(int i) const{
	return this->m_brain->getIdea(i);
}
