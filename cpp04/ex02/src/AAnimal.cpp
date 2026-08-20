#include "AAnimal.h"

AAnimal::AAnimal() : m_type("<meta>") {
	std::cout << GREEN << "AAnimal default constructor called\n" << RESET;
}

// for inheritance only

AAnimal::AAnimal(const std::string& type) : m_type(type){
	std::cout << GREEN << "AAnimal protected constructor called\n" << RESET;
}

AAnimal::AAnimal(const AAnimal& other) : m_type(other.m_type){
	std::cout << LIGHTBLUE << "AAnimal copy constructor called\n" << RESET;
}

AAnimal& AAnimal::operator=(const AAnimal& other){
	if (this != &other){
		m_type = other.m_type;
	}
	std::cout << YELLOW << "AAnimal copy assignment operator called\n" << RESET;
	return *this;
}

AAnimal::~AAnimal(){
	std::cout << RED << "AAnimal destructor called\n" << RESET;
}

// void AAnimal::makeSound() const{
// 	std::cout << "*generic animal sound*\n";
// } don't need this definition anymore

const std::string&	AAnimal::getType() const{
	return this->m_type;
}
