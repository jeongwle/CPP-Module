/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:43:44 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/22 21:42:55 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog default constructor called" << std::endl;
    this->_Type = "Dog";
    this->_Brain = new Brain();
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete _Brain;
}

Dog::Dog(const Dog& copy){
    std::cout << "Dog copy constructor called" << std::endl;
    this->_Type = copy._Type;
    this->_Brain = new Brain(*copy._Brain);
}

Dog&    Dog::operator=(const Dog& dog){
    std::cout << "Dog assignation operator called" << std::endl;
    this->_Type = dog._Type;
    delete this->_Brain;
    this->_Brain = new Brain(*dog._Brain);
    return *(this);
}

void    Dog::makeSound() const{
    std::cout << "Dog make sound. bark! bark!" << std::endl;
}

std::string Dog::getIdea(int num) const{
    return this->_Brain->getIdea(num);
}

void    Dog::setIdea(int num, std::string idea){
    this->_Brain->setIdea(num, idea);
}
