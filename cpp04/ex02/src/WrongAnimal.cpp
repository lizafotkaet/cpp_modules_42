#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : m_type("<metaWrong>") {
	std::cout << GREEN << "WrongAnimal default constructor called\n" << RESET;
}

// for inheritance only

WrongAnimal::WrongAnimal(const std::string& type) : m_type(type){
	std::cout << GREEN << "WrongAnimal protected constructor called\n" << RESET;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : m_type(other.m_type){
	std::cout << LIGHTBLUE << "WrongAnimal copy constructor called\n" << RESET;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
	if (this != &other){
		m_type = other.m_type;
	}
	std::cout << YELLOW << "WrongAnimal copy assignment operator called\n" << RESET;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << RED << "WrongAnimal destructor called\n" << RESET;
}

void WrongAnimal::makeSound() const{
	std::cout << "*generic wrong animal sound*\n";
}

const std::string&	WrongAnimal::getType() const{
	return this->m_type;
}
