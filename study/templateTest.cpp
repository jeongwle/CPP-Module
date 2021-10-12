#include <iostream>

template <typename T>
T Add(T num1, T num2){
    return num1 + num2;
}

int main(void){
    std::cout << Add(3, 5) << std::endl;
    std::cout << Add(4.1, 2.5) << std::endl;
    // std::cout << Add(4.1, 2) << std::endl; "error"
}