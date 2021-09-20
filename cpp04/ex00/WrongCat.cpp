/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:55:39 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/20 20:21:36 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat default constructor called" << std::endl;
    this->_Type = "WrongCat";
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy){
    std::cout << "WrongCat copy constructor called" << std::endl;
    *(this) = copy;
}

WrongCat&    WrongCat::operator=(const WrongCat& wrongcat){
    std::cout << "WrongCat assignation operator called" << std::endl;
    this->_Type = wrongcat._Type;
    return *(this);
}

void    WrongCat::makeSound() const{
    std::cout << "WrongCat make sound. meow~ meow~" << std::endl;
}