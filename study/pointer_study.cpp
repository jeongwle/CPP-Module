#include <iostream>

class   Circle{
    int radius;
    public :
    Circle();
    Circle(int r);
    double  getArea();
};

Circle::Circle(){
    radius = 1;
    std::cout << "나는 기본생성자\n";
}

Circle::Circle(int r){
    radius = r;
    std::cout << "나는 다른생성자\n";
}

double    Circle::getArea(){
    return 3.14 * radius * radius;
}

int main(void){
    Circle donut;
    Circle pizza(30);

    std::cout << donut.getArea() << "\n";

    Circle *p;

    p = &donut;
    std::cout << p->getArea() << "\n";
    p = &pizza;
    std::cout << p->getArea() << "\n";   // 객체 포인터는 지금 줄처럼도 밑에줄처럼도 표현이 가능하다
    std::cout << (*p).getArea() << "\n";
}