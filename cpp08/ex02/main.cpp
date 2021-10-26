/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:15:41 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/26 15:46:57 by jeongwle         ###   ########.fr       */
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

    return 0;
}