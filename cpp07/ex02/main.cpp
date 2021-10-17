/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:44:45 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/17 15:57:23 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
        std::cout << "---------------" << std::endl;
        std::cout << numbers[i] << std::endl;
        std::cout << mirror[i] << std::endl;
        std::cout << "---------------" << std::endl;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        // for (int i = 0; i < 10; i++){
        //     std::cout << "---------------" << std::endl;
        //     std::cout << numbers[i] << std::endl;
        //     std::cout << tmp[i] << std::endl;
        //     std::cout << test[i] << std::endl;
        //     std::cout << "---------------" << std::endl;
        // }
    }
    std::cout << "------save same value------" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << "---------------------------" << std::endl << std::endl;
    std::cout << "--------------Exception--------------" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-------------------------------------" << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    std::cout << "numbers size : " << numbers.size() << std::endl;
    delete [] mirror;//
    return 0;
}
