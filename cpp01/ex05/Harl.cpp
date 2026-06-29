#include "Harl.hpp"

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

// void Harl::complain(std::string level)
// {
// 	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
// 	//storing pointers in array
// 	void (Harl::*actions[4])();
// 	//assign for each index address of fucntion
// 	actions[0] = &Harl::debug;
// 	actions[1] = &Harl::info;
// 	actions[2] = &Harl::warning;
// 	actions[3] = &Harl::error;

// 	for (int i = 0; i < 4; i++)
// 	{
// 		if (level == levels[i])
// 		{
// 			(this->*actions[i])();
// 			return ;
// 		}
// 	}
// 	std::cout << "Unknown complain level." << std::endl;
// }

void Harl::complain(std::string level)
{
    std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void(Harl::*comments[4])() = {
			&Harl::debug, 
			&Harl::info, 
			&Harl::warning, 
			&Harl::error
		};

    for (int i = 0; i < 4; i++)
    {
        if(level == options[i])
        {
            (this->*comments[i])();
            return;
        }
    }

	std::cout << "Unknown complaint\n";
}
