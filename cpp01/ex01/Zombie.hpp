#pragma once
#include <iostream>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[0m"

class Zombie{
    public :
        Zombie(void);
        Zombie(std::string name);
        ~Zombie();
        void setName(std::string name);
    
        void announce( void );
    
    private :
        std::string Name;
};

Zombie* zombieHorde(int N, std::string name);