/* new 와 delete
new와 deleete는 c++의 기본 연산자
데이터타입 *포인터변수 = new 데이터타입;
delete 포인터변수;

힙 메모리가 부족하면 new는 NULL을 리턴하므로 new의 리턴값이 NULL인지 검사하는 것이 좋다!

new를 이용하여 메모리를 할당할 때 초기값을 지정하여 초기화할 수 있다.

데이터타입 *포인터변수 = new 데이터타입(초기값);

ex) int *p = new int(1);
    delete p;

배열의 동적 할당 및 반환
데이터타입 *포인터변수 = new 데이터타입[배열의 크기];
delete [] 포인터변수;

* new를 이용한 객채의 동적 생성과 생성자
클래스이름 *포인터변수 = new 클래스이름; -> 기본 생성자 호출
클래스이름 *포인터변수 = new 클래스이름(생성자 매개변수); -> 매개변수 있는 생성자 호출
Circle *p = new Circle;
Circle *p = new Circle(매개변수);
delete p; -> 소멸자 호출

* 객채 배열의 동적 생성과 생성자
클래스이름 *포인터변수 = new 클래스이름 [배열 크기];
Circle *p = new Circle[3];
Circle *p = new Circle[3] {Circle(1), Circle(2), Circle(3)};
delete [] p;
*/
#include <iostream>
// int main(void){           // new delete 기본적인 사용법
//     int *p = new int(7);
//     std::cout << *p << "\n";
//     delete p;

//     int *q = new int [4];
//     q[0] = 0;
//     q[1] = 1;
//     q[2] = 2;
//     q[3] = 3;
//     for (int i = 0; i < 4; i++)
//     {
//         std::cout << q[i] << "\n";
//     }
//     delete [] q;
//     return (0);
// }

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
    Circle  donut;
    Circle  *waffle = new Circle;
    Circle  *pizza = new Circle[3];

    std::cout << donut.getArea() << "\n";
    std::cout << "도넛은 3.14\n";
    std::cout << waffle->getArea() << "\n";
    std::cout << "와플도 3.14\n";
    for (int i = 0; i < 3; i++)
    {
        pizza[i].setradius(1 + i);
    }
    for (int i = 0; i < 3; i++)
    {
        std::cout << pizza[i].getArea() << "\n"; // == std::cout << (pizza + i)->getArea() << "\n";
    }
    std::cout << "피자끝\n";
    delete waffle;
    delete [] pizza;
    return (0);
}