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

int main(void){
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    // addresses (&str and &stringREF should be the same):
    std::cout << "The memory address of the string variable: " << &str << '\n';
    std::cout << "The memory address of the stringPTR variable: " << &stringPTR << '\n';
    std::cout << "The memory address of the stringREF variable: " << &stringREF << '\n';

    // values (str and stringREF should be the same)
    std::cout << "The value of the string variable: " << str << '\n';
    std::cout << "The value of the stringPTR variable: " << stringPTR << '\n';
    std::cout << "The value of the stringREF variable: " << stringREF << '\n';
    
    return 0;
}