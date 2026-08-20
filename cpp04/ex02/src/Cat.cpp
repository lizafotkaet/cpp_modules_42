#include "Cat.h"

Cat::Cat() : AAnimal("cat"), m_brain(new Brain()) {
	std::cout << GREEN << "Cat default constructor called\n" << RESET;
}

Cat::Cat(const Cat& other) : AAnimal(other), m_brain(new Brain(*other.m_brain)){
	std::cout << LIGHTBLUE << "Cat copy constructor called\n" << RESET;

}

Cat& Cat::operator=(const Cat& other){
	if (this != &other){
		AAnimal::operator=(other);
		*this->m_brain = *other.m_brain;
	}
	std::cout << YELLOW << "Cat copy assignment operator called\n" << RESET;
	return *this;
}

Cat::~Cat(){
	delete this->m_brain;
	std::cout << RED << "Cat destructor called\n" << RESET;
}

void Cat::makeSound() const{
	std::cout << "*meow meow*\n";
}


// exposed so the tests can prove the copy owns a separate Brain

void Cat::setIdea(int i, const std::string &idea){
	this->m_brain->setIdea(i, idea);
}

std::string Cat::getIdea(int i) const{
	return this->m_brain->getIdea(i);
}
