#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : total{}, oldest{} {};

void PhoneBook::addNewContact(){

    if (total < 8){
        contacts[total].setContact(total);
        total++;
    }
    else{
        contacts[oldest].setContact(oldest);
        if (oldest < 7){
            oldest++;
        }
        else{
            oldest = 0;
        }
    }
};

void PhoneBook::searchContact(){
    std::string line;

    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "\n";
    for (ssize_t i = 0; i < total; i++)
        contacts[i].printContactShort();

    ssize_t i{};

    while (line == ""){
        std::cout << "Enter the index of the contact you want to be displayed: ";
        if (!getline(std::cin, line)){
            if (std::cin.eof()){
                std::cout << "\nEOF\n";
                return exit(EXIT_FAILURE);
            }
            std::cout << "An error occured. Try again.\n";
            line = "";
            continue ;
        }
        
        try {
            // if the pos parameter will point to either the last character of int or the next character after int (ex 42k, pos will be 2)
            size_t pos;
            i = std::stoi(line, &pos);
            if (pos != line.length()) {
                std::cout << "Invalid input. Try again.\n";
                line = "";
                continue ;
            }
            if (i < 0 || i > 7){
                std::cout << "Wrong index: should be from 0 to 7. Try again.\n";
                line = "";
                continue ;
            }
        } 
        catch (const std::invalid_argument& e) {
            line = "";
            std::cout << "Invalid input. Try again.\n";
            continue ;
        }
        if (i > total){
            std::cout << "There are " << total << " contacts only. Try again.\n";
        }
    }

    contacts[i].printContactFull();
};
