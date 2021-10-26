/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:15:41 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/26 17:40:36 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "mutantstack.hpp"
#include "mutantstack.cpp"

int main(void){
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << std::endl;
    std::cout << "expected top element : 17, actual top element : "<< mstack.top() << std::endl;
    mstack.pop();
    std::cout << "expected size : 1, actual size : " << mstack.size() << std::endl << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "------- MutantStack element -------" << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "expected top element : 737, actual top element : " << mstack.top() << std::endl;
    std::cout << "expected size : 4, actual size : " << mstack.size() << std::endl;
    std::cout << "-----------------------------------" << std::endl << std::endl;
    std::cout << "---------- original stack ---------" << std::endl;
    std::stack<int> s(mstack);
    std::cout << "expected top element : 737, actual top element : " << s.top() << std::endl;
    std::cout << "expected size : 4, actual size : " << s.size() << std::endl;
    std::cout << "-----------------------------------" << std::endl << std::endl;

    std::cout << "-------------- list ---------------" << std::endl;
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    std::cout << "expected size : 4, actual size : " << lst.size() << std::endl;
    std::list<int>::iterator lstIter = lst.begin();
    std::list<int>::iterator lstIterE = lst.end();
    while (lstIter != lstIterE){
        std::cout << *lstIter << std::endl;
        lstIter++;
    }
    std::cout << "-----------------------------------" << std::endl << std::endl;

    std::cout << "------------ other type -----------" << std::endl;
    MutantStack<char> charMstack;
    for (char c = 'a'; c < 'f'; c++){
        charMstack.push(c);    
    }
    MutantStack<char>::iterator charMstackIter = charMstack.begin();
    for (; charMstackIter != charMstack.end(); charMstackIter++){
        std::cout << *charMstackIter << std::endl;
    }
    std::cout << "expected top element : e, actual top element : " << charMstack.top() << std::endl;
    std::cout << "expected size : 5, actual size : " << charMstack.size() << std::endl;
    std::cout << "-----------------------------------" << std::endl << std::endl;

    std::cout << "---------- iterator test ----------" << std::endl;
    MutantStack<int>::iterator testIter = mstack.begin();
    MutantStack<int>::iterator testIterEnd = mstack.end();
    MutantStack<int>::const_iterator testConstIter = mstack.begin();
    MutantStack<int>::const_iterator testConstIterEnd = mstack.end();
    while (testIter != testIterEnd){
        std::cout << *testIter << std::endl;
        testIter++;
    }
    std::cout << "----- const -----" << std::endl;
    while (testConstIter != testConstIterEnd){
        std::cout << *testConstIter << std::endl;
        testConstIter++;
    }
    std::cout << "----- reverse ------" << std::endl;
    MutantStack<int>::reverse_iterator testReverseIter = mstack.rbegin();
    MutantStack<int>::reverse_iterator testReverseIterEnd = mstack.rend();
    MutantStack<int>::const_reverse_iterator testConstReverseIter = mstack.rbegin();
    MutantStack<int>::const_reverse_iterator testConstReverseIterEnd = mstack.rend();
    while (testReverseIter != testReverseIterEnd){
        std::cout << *testReverseIter << std::endl;
        testReverseIter++;
    }
    std::cout << "----- const reverse ------" << std::endl;
    while (testConstReverseIter != testConstReverseIterEnd){
        std::cout << *testConstReverseIter << std::endl;
        testConstReverseIter++;
    }
    return 0;
}