#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() {
	std::cout << GREEN << "WrongAnimal default constructor called\n" << RESET;
}

// for inheritance only

WrongAnimal::WrongAnimal(std::string_view type) : m_type(type){
	std::cout << GREEN << "WrongAnimal protected constructor called\n" << RESET;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : m_type(other.m_type){
	std::cout << LIGHTBLUE << "WrongAnimal copy constructor called\n" << RESET;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
	if (this != &other){
		WrongAnimal::operator=(other);
	}
	std::cout << YELLOW << "WrongAnimal copy assignment operator called\n" << RESET;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << RED << "WrongAnimal destructor called\n" << RESET;
}

void WrongAnimal::makeSound() const{
	std::cout << "*generic wrong animal sound*\n";
};

void	WrongAnimal::getType() const{
	std::cout << "Type of wrong animal: " << this->m_type << '\n';
}
