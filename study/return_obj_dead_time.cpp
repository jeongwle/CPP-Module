#include <iostream>

class Simple{
    private :
    int num;

    public:
    Simple(int n) : num(n) {
        std::cout << "New Object: " << this << std::endl;
    }
    Simple(const Simple& copy) : num(copy.num){
        std::cout << "New Copy obj : " << this << std::endl;
    }
    ~Simple(){
        std::cout << "Destroy obj: " << this << std::endl;
    }
};

Simple  SimpleFuncObj(Simple ob){
    std::cout << "Parm ADR: " << &ob << std::endl;
    return ob;
}

int main(void){
    Simple obj(7);
    SimpleFuncObj(obj);

    std::cout << std::endl;
    Simple tempRef = SimpleFuncObj(obj);
    std::cout << "Return Obj " << &tempRef << std::endl;
    return (0);
}
