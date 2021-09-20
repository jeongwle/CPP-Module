/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:12:10 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/20 20:21:04 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat default constructor called" << std::endl;
    this->_Type = "Cat";
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& copy){
    std::cout << "Cat copy constructor called" << std::endl;
    *(this) = copy;
}

Cat&    Cat::operator=(const Cat& cat){
    std::cout << "Cat assignation operator called" << std::endl;
    this->_Type = cat._Type;
    return *(this);
}

void    Cat::makeSound() const{
    std::cout << "Cat make sound. meow~ meow~" << std::endl;
}
