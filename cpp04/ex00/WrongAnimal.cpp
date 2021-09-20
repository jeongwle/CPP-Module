/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:49:19 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/20 19:53:42 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _Type("WrongAnimal"){
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *(this) = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wronganimal){
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    this->_Type = wronganimal._Type;
    return *(this);
}

std::string    WrongAnimal::getType() const{
    return this->_Type;
}

void    WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal make sound. Wronganimal! Wronganimal!" << std::endl;
}