#include <iostream>

class First{
private:
    char *_strOne;
public:
    First() {_strOne = new char[5];}
    virtual ~First(){
        std::cout << "First destructor" << std::endl;
        delete [] _strOne;
    }
};

class Second : public First{
private:
    char *_strTwo;
public:
    Second() {_strTwo = new char[5];}
    virtual ~Second(){
        std::cout << "Second destructor" << std::endl;
        delete [] _strTwo;
    }
};

class Third : public Second{
private:
    char *_strThree;
public:
    Third() {_strThree = new char[5];}
    virtual ~Third(){
        std::cout << "Third destructor" << std::endl;
        delete [] _strThree;
    }
};

int main(void){
    First *ptr = new Third();
    delete ptr;
}