#include "Zombie.hpp"

Zombie::Zombie(void) : Name("") {
    std::cout << GREEN << "Default constructor called for a new zombie" << Name << RESET << std::endl;
}

Zombie::Zombie(std::string name) : Name(name) {
    std::cout << GREEN << "Constructor called for " << Name << RESET << std::endl;
}

Zombie::~Zombie() {
    std::cout << RED << "Destructor called for " << Name << RESET << std::endl;
}

void Zombie::setName(std::string name){
    Name = name;
}

void Zombie::announce( void ){
    std::cout << Name << ": BraiiiiiiinnnzzzZ...\n";
}