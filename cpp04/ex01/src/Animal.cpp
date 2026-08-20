#include "Animal.h"

Animal::Animal() : m_type("<meta>") {
	std::cout << GREEN << "Animal default constructor called\n" << RESET;
}

// for inheritance only

Animal::Animal(const std::string& type) : m_type(type){
	std::cout << GREEN << "Animal protected constructor called\n" << RESET;
}

Animal::Animal(const Animal& other) : m_type(other.m_type){
	std::cout << LIGHTBLUE << "Animal copy constructor called\n" << RESET;
}

Animal& Animal::operator=(const Animal& other){
	if (this != &other){
		m_type = other.m_type;
	}
	std::cout << YELLOW << "Animal copy assignment operator called\n" << RESET;
	return *this;
}

Animal::~Animal(){
	std::cout << RED << "Animal destructor called\n" << RESET;
}

void Animal::makeSound() const{
	std::cout << "*generic animal sound*\n";
}

const std::string&	Animal::getType() const{
	return this->m_type;
}
