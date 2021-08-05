#include <iostream>     // std::cout, std::hex, std::endl
#include <iomanip> 

int main () {
    // std::cout << std::setw(10);
    // std::cout << 1 << std::endl;
    // std::cout << std::setw(10);
    // std::cout << 2 << std::endl;
    // std::cout << std::setw(10) << 3 << std::setw(10) << 4
    // << std::endl;
    // std::cout << std::setw(10) << "index" << " | " << std::setw(10)
    // << "first name" << " | " << std::setw(10) << "last name" << " | "
    // << std::setw(10) << "nick name" << std::endl;

    // std::string str("abcdefghijklmnop");
    // std::cout << str[0] << std::endl;
    // std::string copy(str.c_str(), 9);
    // std::cout << copy << std::endl;
    // int i = 0;
    // std::cout << i + 1 << std::endl;
    std::string str("8");
    std::cout << str << std::endl;
    const char *c;
    c = str.c_str();
    int a = *c - '0';
    std::cout << a << std::endl;
}