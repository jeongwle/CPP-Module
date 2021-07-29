#include <string>
#include <iostream>

int main(void){
    std::string str("this is string object");

    // std::cout << str << std::endl;
    // str.append(" function"); // 문자열 뒤에 문자열 추가
    // std::cout << str << std::endl;
    // // std::string append(" study zz");
    // str.append(" study zz", 0, 6);  //append 문자열 내 2번째 매개변수 위치에서 3번째 매개변수의 문자를 현재 str문자열 뒤에 추가
    // std::cout << str << std::endl;
    // str.insert(8, "various "); // str 문자열에서 str[첫번쨰인자]에 문자열 삽입
    // std::cout << str << std::endl;
    // str.replace(39, 5, "learning"); // str 문자열에서 str[첫번재인자]부터 2번째인자 개수만큼의 문자를 매개변수 문자열로 대체
    // std::cout << str << std::endl;

    // std::cout << str.size() << std::endl;  // -> int
    // std::cout << str.length() << std::endl; // -> int 두가지 모두 문자열 길이 리턴 size에서 문자열의 길이는 바이트 수 (영어문자 개수)
    // std::cout << str.capacity() << std::endl; // -> int 할당된 메모리 크기 리턴

    // str.erase(8, 8);
    // std::cout << str << std::endl; // str[첫번째인자]부터 2번째 인자 개수 만큼 삭제
    // str.clear();
    // std::cout << str << "모두 삭제" << std::endl;
    // str.clear();
    // std::cout << str.empty() << std::endl;          // 클리어 하고나서 0을 뱉는지 1을 뱉는지 보여줄용도로 주석해놓음
    // str.append("this is string object function study");
    // std::cout << str << std::endl;
    // std::cout << str.empty() << std::endl; // 반환형 bool 문자열의 크기가 0이면 True 아니면 False를 반환
    // char c1 = str.at(17);
    // char c2 = str[17];
    // std::cout << "c1 : " << c1 << " c2 : " << c2 << std::endl;

    std::string ex("abc def abc ff"); 
    // std::cout << ex.find("g") << std::endl; // 문자열의 처음부터 매개변수로 들어온 문자열을 검색하여 발견한 처음 인덱스를 리턴 없으면 (-1 -> std::string::npos)
    // std::cout << ex.find("f", 7) << std::endl; // 문자열의 부터 매개변수로 들어온 문자열을 검색하여 발견한 처음 인덱스를 리턴 없으면 (-1 -> std::string::npos)
    // std::cout << ex.rfind("def", 8) << std::endl;
    // std::cout << std::string::npos << std::endl;
    std::cout << str.data() << std::endl;  // data와 c_str 함수 모두 
    std::cout << str.c_str() << std::endl;
}