#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : name(name) {
    this->weapon = nullptr;
}

void HumanB::attack(void){
    if (weapon){
        std::cout << name << " attacks with " << weapon->getType() << std::endl;
    }
    else{
        std::cout << name << " attacks with their bare hands " << std::endl;
    }

}

void HumanB::setWeapon(Weapon& weapon){
    this->weapon = &weapon;
}

const Weapon* HumanB::getWeapon(void) const{
    return this-> weapon;
}