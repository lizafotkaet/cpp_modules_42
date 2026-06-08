#include "Zombie.hpp"

static void inputArg(int& size){
    std::string line;

    while (line == ""){
        std::cout << "Enter the size of the horde: ";
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
            size_t pos;
            size = std::stoi(line, &pos);
            if (pos != line.length()) {
                std::cout << "Invalid input. Try again.\n";
                line = "";
                continue ;
            }
            return ;
        } 
        catch (const std::invalid_argument& e) {
            line = "";
            std::cout << "Invalid input. Try again.\n";
            continue ;
        }
        if (size <= 0)
        {
            std::cout << "Size must be at least 1. Try again.\n";
            continue ;   
        }
    }
}

int main(void){
    int size;

    inputArg(size);

    Zombie* horde = zombieHorde(size, "Bublik");

    for (int i = 0; i < size; i++){
        horde[i].announce();
    }

    delete[] horde;
    return 0;
}