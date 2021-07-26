/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:53:33 by jeongwle          #+#    #+#             */
/*   Updated: 2021/07/17 22:38:08 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void){
    phonebook book;
    std::string line;

    while (std::getline(std::cin, line))
    {
        if (line == "ADD")
        {
            std::cout << "add\n";
        } 
        else if (line == "SEARCH")
        {
            std::cout << "search\n";
        }
        else if (line == "EXIT")
        {
            return (0);
        }
        else
        {
            std::cout << "else\n";
        }
    }
    return (0);
}