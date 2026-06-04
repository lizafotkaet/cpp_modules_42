#pragma once

#include "Contact.hpp"


class PhoneBook{
    private :
        static const int max_contacts = 8;
        Contact contacts[max_contacts];
        ssize_t  total;
        ssize_t  oldest;
    
    public :
        PhoneBook();
        void addNewContact();
        void searchContact();
};
