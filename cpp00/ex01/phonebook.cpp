/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:40:14 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/13 16:56:53 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook(){
    return ;
}

phonebook::~phonebook(){
    return ;
}

void    phonebook::add(){
    std::string str;

    for (int i = 0; i < 5; i++)
    {
        std::getline(std::cin, str);
        if (i == 0)
        {
            first = str;
        }
        else if (i == 1)
        {
            last = str;
        }
        else if (i == 2)
        {
            nick = str;
        }
        else if (i == 3)
        {
            phone = str;
        }
        else
        {
            secret = str;
        }
    }
}

void    phonebook::swap(phonebook *book){
    for (int i = 0; i < 7; i++)
    {
        book[i].first = book[i + 1].first;
        book[i].last = book[i + 1].last;
        book[i].nick = book[i + 1].nick;
        book[i].phone = book[i + 1].phone;
        book[i].secret = book[i + 1].secret;
    }
}

void    phonebook::search(phonebook *book, int count){
    std::string index;
    const char *c;
    int num;

    std::cout << "-------------------------------------------" << std::endl;
    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nick name" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        print(book[i].first);
        std::cout << "|";
        print(book[i].last);
        std::cout << "|";
        print(book[i].nick);
        std::cout << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
    }
    if (count == 0)
    {
        std::cout << "no contacts" << std::endl;
    }
    else
    {
        std::cout << "please input index you want to see" << std::endl;
        std::getline(std::cin, index);
        if (index.length() == 1)
        {
            c = index.c_str();
            if ('1' <= *c && *c <= '9')
            {
                num = *c - '0';
                if (1 <= num && num <= count)
                {
                    std::cout << "first name : " << book[num - 1].first << std::endl;
                    std::cout << "last name : " << book[num - 1].last << std::endl;
                    std::cout << "nick name : " << book[num - 1].nick << std::endl;
                    std::cout << "phone number : " << book[num - 1].phone << std::endl;
                    std::cout << "darkest secret : " << book[num - 1].secret << std::endl;
                }
                else
                {
                    std::cout << "wrong input go back to the beginning" << std::endl;
                }
            }
            else
            {
                std::cout << "wrong input go back to the beginning" << std::endl;
            }
        }
        else
        {
                std::cout << "wrong input go back to the beginning" << std::endl;
        }
    }
}

void    phonebook::print(const std::string str){
    if (str.length() > 10)
    {
        std::string nine_letter(str.c_str(), 9);
        std::cout << nine_letter << ".";
    }
    else
    {
        std::cout << std::setw(10) << str;
    }
}