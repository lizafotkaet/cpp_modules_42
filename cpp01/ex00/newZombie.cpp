#include "Zombie.hpp"

Zombie* newZombie( std::string name ){
    Zombie* zombie = new Zombie(name);

    if (zombie == nullptr){
        return nullptr;
    }
    return zombie;
}