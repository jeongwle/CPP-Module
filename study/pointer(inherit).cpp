#include <iostream>

class Person{
public :
    void    Sleep() {std::cout << "Sleep" << std::endl;}
};

class Student : public Person{
public :
    void    Study() {std::cout << "Study" << std::endl;}
};

class PartTImeStudent : public Student{
public:
    void    work() {std::cout << "Work" << std::endl;}
};

int main(void){
    Person *ptr = new Student();
    Person *ptr2 = new PartTImeStudent();
    Student *ptr3 = new PartTImeStudent();

    ptr->Sleep();
    ptr2->Sleep();
    ptr3->Study();
    // 포인터 형에 해당하는 클래스에 정의된 멤버에만 접근이 가능하다.
    // 하지만 함수가 가상함수로 선언되면 포인터변수가 실제로 가리키는 객체를 참조하여 호출의 대상을 결정한다. 
}