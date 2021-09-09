/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:56:16 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/09 15:56:43 by jeongwle         ###   ########.fr       */
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
    int lshift = 1;
    for (int i = 0; i < _fractionalBit; i++){
        lshift *= 2;
    }
    _pointValue = param * lshift;
}

Fixed::Fixed(const float param){
    std::cout << "Float constructor called" << std::endl;
    int lshift = 1;
    for (int i = 0; i < _fractionalBit; i++){
        lshift *= 2;
    }
    _pointValue = roundf(param * lshift);
    // float rshift = (float)1;
    // for (int i = 0; i < _fractionalBit; i++){
    //     rshift /= (float)2;
    // }
    // _pointValue = (float)_pointValue * rshift; 
    // std::cout << _pointValue << std::endl;
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
    _pointValue = raw;
}

float   Fixed::toFloat(void) const{
    float rshift = (float)1;
    for (int i = 0; i < _fractionalBit; i++){
        rshift /= (float)2;
    }
    return (float)_pointValue * rshift;
}

int Fixed::toInt(void) const{
    int rshift = 1;
    for (int i = 0; i < _fractionalBit; i++){
        rshift *= 2;
    }
    return _pointValue / rshift;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){
    os << fixed.toFloat();
    return os;
}
