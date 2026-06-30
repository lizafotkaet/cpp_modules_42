#pragma once

#include <iostream>
#include <string>

#define RED "\033[31m"
#define RESET "\033[0m"

class Harl{

	public :
		Harl();
		~Harl();
		void complain(std::string level);

	private : 
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};