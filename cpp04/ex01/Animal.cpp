/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:59:56 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/20 17:30:02 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _Type("Animal"){
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& copy){
    std::cout << "Animal copy constructor called" << std::endl;
    *(this) = copy;
}

Animal& Animal::operator=(const Animal& animal){
    std::cout << "Animal assignation operator called" << std::endl;
    this->_Type = animal._Type;
    return *(this);
}

std::string    Animal::getType() const{
    return this->_Type;
}

void    Animal::makeSound() const{
    std::cout << "Animal make sound. animal! animal!" << std::endl;
}
