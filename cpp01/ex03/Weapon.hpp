#pragma once

#include <iostream>

class Weapon{
    
    public :
        Weapon(const std::string& type);
//        ~Weapon(); // do we need a destructor here and why/why not
        const std::string& getType() const;
        void setType(const std::string& newType);

    private :
        std::string type;
};
