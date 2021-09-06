#include <iostream>

class Simple{
    private :
    int _num;
    public :
    Simple(int n) : _num(n){}
    Simple(const Simple& copy) : _num(copy._num){
        std::cout << "Called Simpe(const Simple& copy)" << std::endl;
    }
    void    Showdata(){
        std::cout << "num : " << _num << std::endl;
    }
};

void    SimpleFuncObj(Simple ob){
    ob.Showdata();
}

int main(void){
    Simple obj(7);
    std::cout << "함수호출 전" << std::endl;
    SimpleFuncObj(obj);
    std::cout << "함수호출 후" << std::endl;
    return (0);
}