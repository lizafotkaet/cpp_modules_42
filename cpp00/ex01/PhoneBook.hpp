#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"


class PhoneBook{
    private :
        Contact contacts[8];
    
    public :
        PhoneBook();
        void addNewContact(Contact &contacts);
        void searchContact(Contact &contacts);
        void deleteContact(Contact &contacts);
        ~PhoneBook();
};

#endif