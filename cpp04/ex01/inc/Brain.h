#pragma once

#include <iostream>
#include <string>
#include "colors.h"

class Brain{
	public :
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~

	std::string	ideas[100];
};