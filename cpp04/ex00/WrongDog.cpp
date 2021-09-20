/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:52:17 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/20 21:00:08 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongDog.hpp"

WrongDog::WrongDog(){
    std::cout << "WrongDog default constructor called" << std::endl;
    this->_Type = "WrongDog";
}

WrongDog::~WrongDog(){
    std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog& copy){
    std::cout << "WrongDog copy constructor called" << std::endl;
    *(this) = copy;
}

WrongDog&    WrongDog::operator=(const WrongDog& wrongdog){
    std::cout << "WrongDog assignation operator called" << std::endl;
    this->_Type = wrongdog._Type;
    return *(this);
}

void    WrongDog::makeSound() const{
    std::cout << "WrongDog make sound. bark! bark!" << std::endl;
}