#pragma once

#include "Weapon.hpp"

class HumanA{
    public :
        HumanA(const std::string &name, Weapon& weapon);
        void attack(void) const;

    private :
        std::string name;
        Weapon& weapon;
        HumanA(void);
};

