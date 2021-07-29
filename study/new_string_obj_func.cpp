#include <iostream>
#include <string>

int main(void){
    std::string str("new");
    std::string::iterator iter;

    // iter = str.begin();
    // while (iter != str.end())
    // {
    //     std::cout << *iter;
    //     iter++;
    // }
    // std::cout << std::endl;
    std::cout << *(str.begin()) << std::endl;
    // std::cout << *(str.rend()) << std::endl;
    // std::cout << *(str.end()) << std::endl;
    std::cout << *(str.rbegin()) << std::endl;
    // #####    반환값이 std::string::iterator begin은 시작 주소를 end는 문자열의 끝 다음 주소를  그래서 찍어보면 문자열의 앞과 뒤를 뽑으려면 begin과 rbegin을 쓰면 될 것 같다.
    std::cout << str.length() << std::endl;
    std::cout << str.size() << std::endl;
    std::cout << str.capacity() << std::endl;
    std::cout << str.max_size() << std::endl; // -> 문자열이 가질 수 있는 최대 길이를 반환해 줌.

    std::string lie("I like C");
    std::cout << lie << std::endl;
    lie.resize(lie.size() + 2, '+');
    std::cout << lie << std::endl;
    lie.resize(lie.size() - 2);
    std::cout << lie << std::endl;
}