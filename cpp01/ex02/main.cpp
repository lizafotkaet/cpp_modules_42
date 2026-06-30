#include <iostream>

/*
Write a program that contains:
• A string variable initialized to "HI THIS IS BRAIN".
• stringPTR: a pointer to the string.
• stringREF: a reference to the string.
Your program must print:
• The memory address of the string variable.
• The memory address held by stringPTR.
• The memory address held by stringREF.
And then:
• The value of the string variable.
• The value pointed to by stringPTR.
• The value pointed to by stringREF.
*/

#define GREEN "\033[32m"
#define RED "\033[31m"
#define RESET "\033[0m"

int main(void){
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    // addresses (&str and &stringREF should be the same):
    std::cout << "The memory address of the string variable: " << RED << &str << RESET << '\n';
    std::cout << "The memory address of the stringPTR variable: " << &stringPTR << '\n';
    std::cout << "The memory address of the stringREF variable: " << RED << &stringREF << RESET << '\n';

    // values (str and stringREF should be the same)
    std::cout << "The value of the string variable: " << GREEN << str << RESET << '\n';
    std::cout << "The value of the stringPTR variable: " << RED << stringPTR << RESET << '\n';
    std::cout << "The value of the stringREF variable: " << GREEN << stringREF << RESET << '\n';
    
    return 0;
}