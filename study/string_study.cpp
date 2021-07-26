#include <iostream>
#include <string>

//string 객체 생성
//string 객체의 생성자 string() -> 빈문자열 스트링 객체 생성         string(string& str) -> str을 복사한 새로운 스트링 객체 생성

int main(void){
    std::string str; // 빈 문자열의 스트링 객체
    std::string phone_number("010-2002-7142"); // 문자열로 초기화
    std::string copy(phone_number); // phone_number를 복사한 copy 생성
    std::string ncopy(phone_number.c_str(), 1); // c_str() c언어스럽게 만드는 함수인 것 같음. 아무튼 이렇게하면 n개의 문자만 복사하여 객체 생성
    std::string ncopy2(phone_number, 4); //얘는 string객체를 매개변수로 넣어줬더니 인덱스 n번째부터 복사하여 객체 생성

    std::cout << str << "\n";
    std::cout << phone_number << "\n";
    std::cout << copy << "\n";
    std::cout << ncopy << "\n";
    std::cout << ncopy2 << "\n";

    // ----------------동적 생성 -------------

    std::string *p = new std::string("C++");
    std::cout << *p << "\n";
    p->append(" Great!!");
    std::cout << *p << "\n";
    delete p;

    // ------------문자열 입력 ------------
    std::string name;
    std::cin >> name; // 문자열 입력받기
    std::cout << name << "\n";
    //std::cin은 한계가 있다. 공백 문자를 만나면 그 앞에까지를 하나의 문자열로 인식하기 때문에 공백 문자를 포함하는 문자열을 넣을수가 없다.
    //여기서 잠깐! cin과 getline을 같이 쓸경우 문제가 생긴다. cin에서 '\n'개행문자를 받지 않고 입력버퍼에 남겨두기 때문에 getline은 입력버퍼에 남은 문자를 받게된다.
    // std::cin.ignore();  앞에 한글자만 지운다.
    std::cin.clear(); // 입력버퍼를 초기화 해준다.
    std::cin.ignore(1000, '\n');
    std::string name1;
    std::getline(std::cin, name1); // <string> 헤더파일에 선언된 getline()전역함수 첫번째 인자에는 std::cin을 두번째 인자에는 string 객체를 3번째 인자에는 문자열의 마지막을 표시하는 구분문자(delimiter)
    std::cout << name1 << "\n";
}