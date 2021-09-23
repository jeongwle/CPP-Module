/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:12:10 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/22 21:46:28 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat default constructor called" << std::endl;
    this->_Type = "Cat";
    this->_Brain = new Brain();
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete _Brain;
}

Cat::Cat(const Cat& copy){
    std::cout << "Cat copy constructor called" << std::endl;
    this->_Type = copy._Type;
    this->_Brain = new Brain(*copy._Brain);
}

Cat&    Cat::operator=(const Cat& cat){
    std::cout << "Cat assignation operator called" << std::endl;
    this->_Type = cat._Type;
    delete this->_Brain;
    this->_Brain = new Brain(*cat._Brain);
    return *(this);
}

void    Cat::makeSound() const{
    std::cout << "Cat make sound. meow~ meow~" << std::endl;
}

std::string Cat::getIdea(int num) const{
    return this->_Brain->getIdea(num);
}

void    Cat::setIdea(int num, std::string idea){
    this->_Brain->setIdea(num, idea);
}
