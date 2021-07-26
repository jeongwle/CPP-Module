#include <iostream>

class Circle{
    int radius;
    public :
    Circle();
    Circle(int r);
    double  getArea();
    void    setradius(int r);
};

Circle::Circle(){
    radius = 1;
}

Circle::Circle(int r){
    radius = r;
}

double  Circle::getArea(){
    return 3.14 * radius * radius;
}

void    Circle::setradius(int r){
    radius = r;
}

int main(void){
    Circle array[3];

    std::cout << array[0].getArea() << "\n";
    std::cout << "기본 생성자가 적용된다\n";

    array[1].setradius(2);
    array[2].setradius(3);
    for (int i = 0; i < 3; i++)
    {
        std::cout << array[i].getArea() << "\n";
    }

    Circle *p;
    p = array;
    for (int i = 0; i < 3; i++)
    {
        std::cout << p->getArea() << "\n";
        p++; // 주소를 옮겨서 배열을 순서대로 접근하는 것도 가능하다
    }
    std::cout << "\n";
    Circle pizza[3] = {Circle(1), Circle(2), Circle(3)}; // 이렇게 생성자로 초기화 해도 된다.
    for (int i = 0; i < 3; i++)
    {
        std::cout << pizza[i].getArea() << "\n";
    }
}