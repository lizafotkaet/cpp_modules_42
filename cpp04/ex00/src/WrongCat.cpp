#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal("cat"), m_sTest("some value that is long enough to get leaked"),
		m_numTest(new int[10]) {
	std::cout << GREEN << "WrongCat default constructor called\n" << RESET;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other), m_sTest(other.m_sTest), m_numTest(new int[10]) {
	for (int i = 0; i < 10; i++){
		m_numTest[i] = other.m_numTest[i];
	}
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
	delete[] m_numTest;
	std::cout << RED << "WrongCat destructor called\n" << RESET;
}

void WrongCat::makeSound() const{
	std::cout << "*bad kitty noises*\n";
};
