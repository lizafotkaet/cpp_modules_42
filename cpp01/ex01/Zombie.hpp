#pragma once
#include <iostream>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[0m"

class Zombie{
    public :
        Zombie(std::string name);
        ~Zombie();
    
        void announce( void );
    
        
    private :
        std::string Name;
        Zombie(void);
};
