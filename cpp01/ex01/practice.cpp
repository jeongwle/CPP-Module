#include <iostream>
#include <string>

int main(void){
    std::string name("hi");

    std::cout << name << std::endl;
    int n = 4;
    char c = n + '0';
    std::string name1;
    name1 = name + c;
    std::cout << name << std::endl;
    std::cout << name1 << std::endl;

}