#pragma once

#include "Weapon.hpp"

class HumanB{
    public :
        HumanB(const std::string& name);
        void setWeapon(Weapon& arg);
        const Weapon* getWeapon(void) const;
        void attack(void);

    private :
        std::string name;
        Weapon* weapon;
        HumanB(void);
};