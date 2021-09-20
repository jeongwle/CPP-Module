/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:43:44 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/20 20:21:20 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog default constructor called" << std::endl;
    this->_Type = "Dog";
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& copy){
    std::cout << "Dog copy constructor called" << std::endl;
    *(this) = copy;
}

Dog&    Dog::operator=(const Dog& dog){
    std::cout << "Dog assignation operator called" << std::endl;
    this->_Type = dog._Type;
    return *(this);
}

void    Dog::makeSound() const{
    std::cout << "Dog make sound. bark! bark!" << std::endl;
}
