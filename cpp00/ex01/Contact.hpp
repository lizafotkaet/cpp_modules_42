#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Contact{
	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		int index;
	
	public :
		Contact();
		void setContact(int i);
		void printContactFull();
		void printContactShort();
		int getIndex() const {return index;};
};
