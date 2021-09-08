/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:43:14 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/08 21:18:08 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    _pointValue = 0;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy){
    std::cout << "Copy constructor called" << std::endl;
    *(this) = copy;
}

Fixed::Fixed(const int param){
    std::cout << "Int constructor called" << std::endl;
    _pointValue = param;
}

Fixed::Fixed(const float param){
    std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed){
    std::cout << "Assignation operator called" << std::endl;
    _pointValue = fixed.getRawBits();
    return *(this);
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return _pointValue;
}

void    Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    _pointValue = raw;
}

float   Fixed::toFloat(void) const{

}

int Fixed::toInt(void) const{
    return _pointValue;
}
