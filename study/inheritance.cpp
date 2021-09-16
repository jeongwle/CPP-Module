/*
기초(base)클래스  == 상위클래스 -> 유도(derived)클래스 == 하위클래스
유도클래스는 상속받은 기초 클래스의 변수에 대해서도 초기화할 책임을 지니고 있다.
객체가 생성될 때 유도클래스의 객체는 기초클래스의 생성자를 사용하여 기초클래스의 변수를 초기화한다.
유도클래스는 기초클래스에서 상속받은 private 변수를 직접 접근할 수 없기 때문에 기초클래스의 멤버함수를
이용하여 간접적으로 접근할 수 있다.
객체 생성과정에서 유도클래스의 생성자보다 기초클래스의 생성자가 먼저 호출이 되어
기초, 유도 순서로 초기화 되고 소멸자는 그 역순으로 호출이 된다.
따라서 생성자에서 동적할당을 통해 초기화를 진행한다면 소멸자에서 그 메모리를 해제해 주어야 한다.


상속을 배웠으니 protected 접근제어 지시자에 대해서도 알아보자
c++ 접근제어 지시자에는 private, protected, public 세가지가 존재한다.
이들이 허용하는 접근의 범위는 private < protected < public 이다.
기본적으로 protected로 선언되면 private과 유사하게 클래스 외부에서 접근이 불가능하다.
하지만 상속받은 유도클래스에서 protected로 선언된 기초클래스의 변수에 접근하는 것이 가능하다!!

상속도 3가지 형태를 가지고 있다.

class Derived : public Base
class Derived : protected Base
class Derived : private Base
protected 상속의 의미
protected 보다 접근의 범위가 넓은 멤버는 ptrotected로 변경시켜서 상속하겠다.
ex)
class base{
private:
    int num1;
protected :
    int num2;
public :
    int num3;
};

class drived : protected Base {
private(접근불가) :
    int num1;
protected :
    int num2;
protected :
    int num3;
};
이 된다! private은 상속받은 유도클래스 내에서는 접근불가가 되어버린다.
*/