#include "Brain.h"

Brain::Brain(){
	std::cout << GREEN << "Brain default constructor called\n" << RESET;
	for (int i = 0; i < SIZE_ARR; i++){
		this->m_ideas[i] = "idea" + std::to_string(i);
	}
}

Brain::Brain(const Brain& other){
	std::cout << LIGHTBLUE << "Brain copy constructor called\n" << RESET;
	for (int i = 0; i < SIZE_ARR; i++){
		this->m_ideas[i] = other.m_ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other){
	if (this != &other){
		for (int i = 0; i < SIZE_ARR; i++){
			this->m_ideas[i] = other.m_ideas[i];
		}
	}
	std::cout << YELLOW << "Brain copy assignment operator called\n" << RESET;
	return *this;
}

Brain::~Brain(){
	std::cout << RED << "Brain destructor called\n" << RESET;
}

std::string	Brain::getIdea(int i) const{
	if (i >= 0 && i < SIZE_ARR){
		return this->m_ideas[i];
	}
	return "";
}

void	Brain::setIdea(int i, const std::string& idea){
	if (i >= 0 && i < SIZE_ARR){
		m_ideas[i] = idea;
	}
}
