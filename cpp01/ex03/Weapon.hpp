#pragma once

#include <iostream>

class Weapon{
    
    public :
        const std::string& getType();
        void setType(std::string& newType);

    private :
        std::string type;
};
