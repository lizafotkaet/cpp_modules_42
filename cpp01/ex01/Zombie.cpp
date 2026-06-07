#include "Zombie.hpp"

Zombie::Zombie(std::string name) : Name(name) {
    std::cout << GREEN << "Constructor called for " << Name << RESET << std::endl;
}

Zombie::~Zombie() {
    std::cout << RED << "Destructor called for " << Name << RESET << std::endl;
}

