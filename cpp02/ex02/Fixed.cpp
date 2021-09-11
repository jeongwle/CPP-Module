/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:56:16 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/11 18:32:19 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    // std::cout << "Default constructor called" << std::endl;
    _pointValue = 0;
}

Fixed::~Fixed(){
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy){
    // std::cout << "Copy constructor called" << std::endl;
    *(this) = copy;
}

Fixed::Fixed(const int param){
    // std::cout << "Int constructor called" << std::endl;
    int lshift = 1;
    for (int i = 0; i < _fractionalBit; i++){
        lshift *= 2;
    }
    _pointValue = param * lshift;
}

Fixed::Fixed(const float param){
    // std::cout << "Float constructor called" << std::endl;
    int lshift = 1;
    for (int i = 0; i < _fractionalBit; i++){
        lshift *= 2;
    }
    _pointValue = roundf(param * lshift);
}

Fixed& Fixed::operator=(const Fixed& fixed){
    // std::cout << "Assignation operator called" << std::endl;
    _pointValue = fixed.getRawBits();
    return *(this);
}

int Fixed::getRawBits(void) const{
    // std::cout << "getRawBits member function called" << std::endl;
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

bool  Fixed::operator>(const Fixed& fixed) const{
    if (_pointValue > fixed.getRawBits()){
        return true;
    }
    return false;
}

bool  Fixed::operator<(const Fixed& fixed) const{
    if (_pointValue < fixed.getRawBits()){
        return true;
    }
    return false;
}

bool  Fixed::operator>=(const Fixed& fixed) const{
    if (_pointValue >= fixed.getRawBits()){
        return true;
    }
    return false;
}

bool  Fixed::operator<=(const Fixed& fixed) const{
    if (_pointValue <= fixed.getRawBits()){
        return true;
    }
    return false;
}

bool  Fixed::operator==(const Fixed& fixed) const{
    if (_pointValue == fixed.getRawBits()){
        return true;
    }
    return false;
}

bool  Fixed::operator!=(const Fixed& fixed) const{
    if (_pointValue != fixed.getRawBits()){
        return true;
    }
    return false;
}

Fixed&  Fixed::operator+(const Fixed& fixed){
    _pointValue += fixed.getRawBits();
    return *(this);
}

Fixed&  Fixed::operator-(const Fixed& fixed){
    _pointValue -= fixed.getRawBits();
    return *(this);
}

Fixed&  Fixed::operator*(const Fixed& fixed){
    _pointValue *= fixed.getRawBits();
    float rshift = (float)1;
    for (int i = 0; i < _fractionalBit; i++){
        rshift /= (float)2;
    }
    _pointValue = (float)_pointValue * rshift;
    return *(this);
}

Fixed&  Fixed::operator/(const Fixed& fixed){
    _pointValue /= fixed.getRawBits();
    float lshift = (float)1;
    for (int i = 0; i < _fractionalBit; i++){
        lshift *= (float)2;
    }
    _pointValue = (float)_pointValue * lshift;
    return *(this);
}

Fixed&  Fixed::operator++(){
    _pointValue += 1;
    return *(this);
}

Fixed  Fixed::operator++(int){
    float rshift = (float)1;
    for (int i = 0; i < _fractionalBit; i++){
        rshift /= (float)2;
    }
    float param = (float)_pointValue * rshift;
    Fixed temp(param);
    _pointValue += 1;
    return temp;
}

Fixed&  Fixed::operator--(){
    _pointValue -= 1;
    return *(this);
}

Fixed  Fixed::operator--(int){
    float rshift = (float)1;
    for (int i = 0; i < _fractionalBit; i++){
        rshift /= (float)2;
    }
    float param = (float)_pointValue * rshift;
    Fixed temp(param);
    _pointValue -= 1;
    return temp;
}

Fixed&   Fixed::min(Fixed& fixed1, Fixed& fixed2){
    if (fixed1.getRawBits() <= fixed2.getRawBits()){
        return fixed1;
    }
    return fixed2;
}

Fixed&   Fixed::max(Fixed& fixed1, Fixed& fixed2){
    if (fixed1.getRawBits() >= fixed2.getRawBits()){
        return fixed1;
    }
    return fixed2;
}

const Fixed&   Fixed::min(const Fixed& fixed1, const Fixed& fixed2){
    if (fixed1.getRawBits() <= fixed2.getRawBits()){
        return fixed1;
    }
    return fixed2;
}

const Fixed&   Fixed::max(const Fixed& fixed1, const Fixed& fixed2){
    if (fixed1.getRawBits() >= fixed2.getRawBits()){
        return fixed1;
    }
    return fixed2;
}
