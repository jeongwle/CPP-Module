/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:05:15 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/06 12:05:16 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(){
    _level[0] = "DEBUG";
    _level[1] = "INFO";
    _level[2] = "WARNING";
    _level[3] = "ERROR";
    _funcPtrArr[0] = &Karen::debug;
    _funcPtrArr[1] = &Karen::info;
    _funcPtrArr[2] = &Karen::warning;
    _funcPtrArr[3] = &Karen::error;
}

Karen::~Karen(){
    return ;
}

void    Karen::debug(){
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it" << std::endl;
}

void    Karen::info(){
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning(){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error(){
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level){
    int i = 0;
    while (_level[i] != level){
        i++;
        if (i == 4)
        {
            break ;
        }
    }
    if (i != 4)
    {
        (this->*_funcPtrArr[i])();
    }
}
