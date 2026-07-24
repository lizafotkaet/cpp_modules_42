#include "Zombie.hpp"

Zombie::Zombie(std::string name) : Name(name) {
    std::cout << GREEN << "Constructor called for " << Name << RESET << '\n';
}

Zombie::~Zombie() {
    std::cout << RED << "Destructor called for " << Name << RESET << '\n';
}

void Zombie::announce( void ){
    std::cout << Name << ": BraiiiiiiinnnzzzZ...\n";
}
