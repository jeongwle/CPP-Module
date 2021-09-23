/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:14:27 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/22 20:23:15 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; i++){
        this->_Ideas[i] = itoa(i);
    }
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& copy){
    std::cout << "Brain copy constructor called" << std::endl;
    *(this) = copy;
}

Brain&  Brain::operator=(const Brain& brain){
    std::cout << "Brain assignation operator called" << std::endl;
    for (int i = 0; i < 100; i++){
        this->_Ideas[i] = brain._Ideas[i];
    }
    return *(this);
}

std::string Brain::getIdea(int num) const{
    return this->_Ideas[num];
}

void    Brain::setIdea(int num, std::string idea){
    this->_Ideas[num] = idea;
}

std::string   Brain::itoa(int num){
    std::string temp;
    std::string res;

    while (num / 10)
    {
        char c = num % 10 + '0';
        temp.append(1, c);
        num /= 10;
    }
    char c = num + '0';
    temp.append(1, c);
    for (size_t i = 0; i < temp.length(); i++)
    {
        res.append(1, *(temp.rbegin() + i));
    }
    return (res);
}