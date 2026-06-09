#pragma once

#include "Weapon.hpp"

class HumanA{
    public :
        HumanA(Weapon weapon, std::string name);
        ~HumanA();
        void attack(void);

    private :
        Weapon type;
        std::string Name;

};