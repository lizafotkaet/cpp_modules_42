#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
	std::cout << " years, whereas you started working here just last month.\n";
}

void Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void(Harl::*complaints[4])(void) = {
			&Harl::debug, 
			&Harl::info, 
			&Harl::warning, 
			&Harl::error
		};

    int i = 0;

    while (i < 4 && levels[i] != level){
        i++;
    }

    switch (i){
        case 0:
            std::cout << RED << levels[0] << RESET << std::endl;
            (this->*complaints[0])();
            // fall through
        case 1:
            std::cout << RED << levels[1] << RESET << std::endl;
            (this->*complaints[1])();
            // fall through
        case 2:
            std::cout << RED << levels[2] << RESET << std::endl;
            (this->*complaints[2])();
            // fall through
        case 3:
            std::cout << RED << levels[3] << RESET << std::endl;
            (this->*complaints[3])();
            break ;
        default: 
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}
