/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:49:50 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/23 21:14:38 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

template <typename T>
void defaultIterTest(T& container, int whatever){
    typename T::iterator iter;
    try {
        iter = easyfind(container, whatever);
        std::cout << *iter << std::endl;
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}

template <typename T>
void constIterTest(const T& container, int whatever){
    try {
        typename T::const_iterator cIter = easyfind(container, whatever);
        std::cout << *cIter << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
}

int main(void){
    int arr[4] = {10, 20, 30, 40};
    std::vector<int> dVec(arr, arr + sizeof(arr) / sizeof(int));
    const std::vector<int> cVec(arr, arr + sizeof(arr) / sizeof(int));

    std::cout << "++++++++++ vector +++++++++++" << std::endl;
    std::cout << "---------- find 30 ----------" << std::endl;
    defaultIterTest(dVec, 30);
    constIterTest(cVec, 30);
    std::cout << "-----------------------------" << std::endl << std::endl;

    std::cout << "----------- find 3 ----------" << std::endl;
    defaultIterTest(dVec, 3);
    constIterTest(cVec, 3);
    std::cout << "-----------------------------" << std::endl << std::endl;

    std::cout << "---------- find 40 ----------" << std::endl;
    defaultIterTest(dVec, 40);
    constIterTest(cVec, 40);
    std::cout << "-----------------------------" << std::endl;
    std::cout << "+++++++++++++++++++++++++++++" << std::endl << std::endl;

    std::list<int> dList(arr, arr + sizeof(arr) / sizeof(int));
    const std::list<int> cList(arr, arr+ sizeof(arr) / sizeof(int));

    std::cout << "+++++++++++ list ++++++++++++" << std::endl;
    std::cout << "---------- find 30 ----------" << std::endl;
    defaultIterTest(dList, 30);
    constIterTest(cList, 30);
    std::cout << "-----------------------------" << std::endl << std::endl;

    std::cout << "----------- find 3 ----------" << std::endl;
    defaultIterTest(dList, 3);
    constIterTest(cList, 3);
    std::cout << "-----------------------------" << std::endl << std::endl;

    std::cout << "----------- find 40 ----------" << std::endl;
    defaultIterTest(dList, 40);
    constIterTest(cList, 40);
    std::cout << "-----------------------------" << std::endl;
    std::cout << "+++++++++++++++++++++++++++++" << std::endl;
}