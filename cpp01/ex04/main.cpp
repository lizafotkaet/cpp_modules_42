#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

std::string replace_text(std::fstream& inputFile, std::string& s1, std::string& s2)
{
	std::stringstream	buffer;
	buffer << inputFile.rdbuf();
    std::string content = buffer.str();
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos)
    {
        content.erase(pos, s1.length()); 
        content.insert(pos, s2);
        pos += s2.length();
    }
    return content;
}

int main(int argc, char** argv) {

    if (argc != 4) {
        std::cerr << "Error: Invalid number of arguments\n";
        std::cerr << "Usage: " << argv[0] << " <input_file> <search_string> <replacement_string>\n";
        return 1;
    }

    std::string s1 = argv[2];
    std::string s2 = argv[3];

    
    std::fstream file(argv[1]);
    
    // !!! check that the file actually opened
    if (!file.is_open()) {
        std::cerr << "Error: could not open the file\n";
        return 1;
    }
    
    if (s1.empty()) {
        std::cerr << "Error: s1 must not be empty\n";
        return 1;
    }

    std::string replaced_content = replace_text(file, s1, s2);
    file.close();  // unnecessary — happens automatically when 'file' goes out of scope

    std::ofstream outputFile(std::string(argv[1]) + ".replace");

    if (!outputFile.is_open()) {
        std::cerr << "Error: could not create the output file\n";
        return 1;
    }
    outputFile << replaced_content;
    outputFile.close(); // unnecessary
    return 0;
}
