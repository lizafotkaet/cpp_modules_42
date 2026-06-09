#pragma once

#include "Weapon.hpp"

class HumanB{
    public :
        HumanB(std::string name);
        ~HumanB();
        void attack(void);

    private :
        Weapon type;
        std::string Name;
}