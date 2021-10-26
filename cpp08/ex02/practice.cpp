#include <stack>
#include <iostream>
#include <deque>

int main(void){

    std::stack<int> intStack;
    intStack.push(3);
    intStack.push(2);
    intStack.push(1);

    std::cout << intStack.top() << std::endl;
    intStack.pop();
    std::cout << intStack.top() << std::endl;
    intStack.push(1);
    std::cout << intStack.top() << std::endl;
    std::cout << "stack size = ";
    std::cout << intStack.size() << std::endl;

    std::cout << "where stack is empty : "<< intStack.empty() << std::endl;
    std::cout << intStack[0] << std::endl;

    std::stack<int>::container_type::iterator

    class  testStack : public std::stack{
    public :
    
        
    };
}