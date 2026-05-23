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
	
	public :
		void setFirstName(std::string first_name);
		void setLastName(std::string last_name);
		void setNickname(std::string nickname);
		void setPhoneNumber(std::string phone_number);
		void setDarkestSecret(std::string darkest_secret);
		std::string getFirstName() const { return first_name; }
		std::string getLastName() const { return last_name; }
		std::string getNickname() const { return nickname; }
		std::string getPhoneNumber() const { return phone_number; }
		std::string getDarkestSecret() const { return darkest_secret; }
};

#endif