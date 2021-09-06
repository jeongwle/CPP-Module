#include <string>
#include <iostream>

class Person {
    private :
    int _age;
    std::string _name;

    public :
    Person();
    Person(std::string name, int age);
    Person (const Person & p);
    std::string getName();
    int getAge();
    void setName(std::string name);
    void setAge(int age);
};

Person::Person(){
    _name = "";
    _age = 0;
}

Person::Person(std::string name, int age){
    _name = name;
    _age = age;
}

Person::Person(const Person& p){
    _name = p._name;
    _age = p._age;
}

std::string Person::getName(){
    return _name;
}

int Person::getAge(){
    return _age;
}

void    Person::setName(std::string name){
    _name = name;
}

void    Person::setAge(int age){
    _age = age;
}

int main(void){
    Person p1;
    Person p2("jeongwle", 30);

    p1.setName("junghwki");
    p1.setAge(28);
    Person p3(p2);
    // Person p3 = p2;

    std::cout << "p1 name = " << p1.getName() << std::endl;
    std:: cout << "p2 name = " << p2.getName() << std::endl;
    std:: cout << "p3 name = " << p3.getName() << std::endl;
    std:: cout << "p1 age = " << p1.getAge() << std::endl;
    std:: cout << "p2 age = " << p2.getAge() << std::endl;
    std:: cout << "p3 age = " << p3.getAge() << std::endl;
}