#include <iostream>
#include <iomanip>

int main(void)
{
    std::cout << "normal message\n";
    std::cout << "the number is" << std::setw(10) << 10 << std::endl;
    std::cerr << "error message\n";
}
