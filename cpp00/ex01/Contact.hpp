#ifndef CONTACT_HPP
#define CONTACT_HPP

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
//		std::tuple<std::string, std::string, std::string,> getContact() const {return first_name, last_na}
};

#endif