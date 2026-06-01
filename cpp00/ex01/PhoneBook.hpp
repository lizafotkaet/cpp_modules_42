#pragma once

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"


class PhoneBook{
    private :
        Contact contacts[8];
        ssize_t  total;
        ssize_t  oldest;
    
    public :
        PhoneBook();
        void addNewContact();
        void searchContact();
};

#endif