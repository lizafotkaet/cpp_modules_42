#include <iostream>

#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

std::string replace_text(std::ifstream& inputFile, std::string& s1, std::string& s2)
{
	std::stringstream	buffer;
	buffer << inputFile.rdbuf(); //"read buffer" method that returns a pointer to the underlying stream buffer
    std::string content = buffer.str();  //.str gives you the string stored inside the stream (extract all as one sings string)
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) //.find search for substring inside another string.. std::string::npos -- "special "not found"" for .find
    {
        content.erase(pos, s1.length()); //.erase to erase [pos - s1.lenght()] index from string
        content.insert(pos, s2); //.insert to add s2 to index pos
        pos += s2.length();
    }
    return content;
}

int main(int argc, char** argv) {

    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <input_file>\n";
        return 1;
    }

    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream file(argv[1]);

    // Always check that the file actually opened
    if (!file.is_open()) {
        std::cerr << "Could not open the file\n";
        return 1;
    }

    std::string replaced_content = replace_text(file, s1, s2);
    file.close();  // optional — happens automatically when 'file' goes out of scope

    // Read line by line
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << '\n';
    }

    std::ofstream outputFile(std::string(argv[1]) + ".replace");

    return 0;
}
