#include <iostream>

// void    swap_by_ref(int &ref1, int &ref2){
//     int temp = ref1;
//     ref1 = ref2;
//     ref2 = temp;
// }

// int &func_one(int &ref){
//     ref++;
//     return ref;
// }

// int main(void ){
//     int num1 = 2021;
//     int &num2 = num1;

//     std::cout << "num 1 : " << num1 << std::endl;
//     std::cout << "num 2 : " << num2 << std::endl;
//     num2 = 1;
//     std::cout << "num 1 : " << num1 << std::endl;
//     std::cout << "num 2 : " << num2 << std::endl;
//     std::cout << "주소값" << std::endl;
//     std::cout << "num 1 : " << &num1 << std::endl;
//     std::cout << "num 2 : " << &num2 << std::endl;
//     /*  참조자란 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름
//         새로 선언되는 변수의 이름 앞에 &연산자가 있다면 참조자의 선언을 뜻한다.
//         하나의 메모리공간에 이름이 두개가 된 것.
//         참조자의 수에는 제한이 없으며, 참조자를 대상으로도 참조자를 선언할 수 있다.
//         참조자는 변수에 대해서만 선언이 가능하고, 선언됨과 동시에 누군가를 참조해야만 한다.
//         참조자의 활용에는 함수가 큰 위치를 차지한다.
//         함수내에서 참조자의 값을 변경하지 않을 경우 const로 선언해서 값을 변경하지 않겠다고 선언하는 것이 좋다.
//     */
//    int val1 = 10;
//    int val2 = 20;
//    swap_by_ref(val1, val2);
//    std::cout << "val1 : " << val1 << std::endl;
//    std::cout << "val2 : " << val2 << std::endl;

//    int nbr1 = 1;
//    int &nbr2 = func_one(nbr1);

//    nbr2++;
//    std::cout << "nbr1 : " << nbr1 << " " << "nbr2 : " << nbr2 << std::endl;
//    nbr1 += 100;
//    std::cout << "nbr1 : " << nbr1 << " " <<"nbr2 : " << nbr2 << std::endl;
// }

int main(void){
    const int &num = 50; // 참조자로 변수만 참조가 가능하다하였는데 const 참조자는 상수를 참조할 수 있다.
                        // const 참조자를 이용해서 상수를 참조할 때 50을 임시변수에 저장해놓고 참조하게끔 하기 때문

    std::cout << num << std::endl;
    // num++; Const선언으로 값을 변경하지않겠다고 선언했기 때문에 compile 에러를 뱉어낸다

    int *ptr = new int;
    int &ref = *ptr;

    ref = 10;
    std::cout << *ptr << std::endl;
}