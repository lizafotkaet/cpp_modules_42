#include "PhoneBook.hpp"
#include "Contact.hpp"

class Contact
{
	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phonenumber;
		std::string darkest_secret;
	public :
		void set_first(const std::string &value) { first_name = value; }
		void set_last(const std::string &value) { last_name = value; }
		void set_nick(const std::string &value) { nickname = value; }
		void set_dark(const std::string &value) { darkest_secret = value; }
		void set_phone(const std::string &value) { phonenumber = value; }
		std::string get_first() const {return first_name; }
		std::string	get_last() const {return last_name; }
		std::string	get_nick() const {return nickname; }
		std::string	get_phone() const {return phonenumber; }
		std::string	get_dark() const {return darkest_secret; }
};


class PhoneBook
{
	private:
		static	const int MaxContacts = 8;
		Contact	contacts[MaxContacts];
		int		index = 0;
		int		saved_contacts = 0;
	public:
		void	phone_number(Contact &contact);
		void	add_contact();
		void	search();
		void	print_index();
		void	print_info(int i);
};

void PhoneBook::phone_number(Contact &contact)
{
	std::string line{};
	while (true)
	{
		std::cout << "ENTER PHONE NUMBER: ";
		if (!std::getline(std::cin >> std::ws, line))
			exit(0);
		size_t i{};
		while (i < (size_t)line.length() && std::isdigit(static_cast<unsigned char>(line[i])))
			i++;
		if (i == (size_t)line.length() && line.length() >= 10 && line.length() <= 15)
		{
			contact.set_phone(line);
			break;
		}
		else
			std::cout << "Enter a valid phone number (10-15 digits only)\n";
	}
}