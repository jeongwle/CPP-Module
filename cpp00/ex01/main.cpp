/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:53:33 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/05 21:10:22 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void){
    phonebook book[8];
    std::string line;
    int count;

    count = 0;
    std::cout << "input[ADD or SEARCH or EXIT]" << std::endl;
    while (std::getline(std::cin, line))
    {
        if (line == "ADD")
        {
            std::cout << "please input one field at a time"
            << "[first name, last name, nickname, phonenumber, darkest secret]"
            << std::endl;
            if (count == 8)
            {
                book->swap(book);
                book[count - 1].add();
            }
            else
            {
                book[count].add();
            }
            if (count != 8)
            {
                count++;
            }
        } 
        else if (line == "SEARCH")
        {
            book->search(book, count);
        }
        else if (line == "EXIT")
        {
            return (0);
        }
        std::cout << "input[ADD or SEARCH or EXIT]" << std::endl;
    }
    return (0);
}