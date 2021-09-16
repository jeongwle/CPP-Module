#include <iostream>
#include <string>

int main(void){
    std::string test("hello world");
    std::string test1("hello");
 
    std::cout << test.find(" ") << std::endl;
    test.erase(0, test1.length());
    std::cout << test << std::endl;
}