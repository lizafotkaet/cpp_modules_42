#include <iostream>

#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream file("example.txt");

    // Always check that the file actually opened
    if (!file.is_open()) {
        std::cerr << "Could not open the file\n";
        return 1;
    }

    // Read line by line
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << '\n';
    }

    file.close();  // optional — happens automatically when 'file' goes out of scope
    return 0;
}

int main(int argc, char** argv){
    if (argc != 4)
        return (1);

    
}