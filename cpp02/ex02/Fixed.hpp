/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:56:39 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/09 19:52:01 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class   Fixed{
private :
    int _pointValue;
    static const int   _fractionalBit = 8;
public :
    Fixed();
    ~Fixed();
    Fixed(const Fixed& copy);
    Fixed(const int param);
    Fixed(const float param);
    Fixed&  operator=(const Fixed& fixed);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
    Fixed&  operator>(const Fixed& fixed1, const Fixed& fixed2);
    Fixed&  operator<(const Fixed& fixed1, const Fixed& fixed2);
    Fixed&  operator>=(const Fixed& fixed1, const Fixed& fixed2);
    Fixed&  operator<=(const Fixed& fixed1, const Fixed& fixed2);
    Fixed&  operator==(const Fixed& fixed1, const Fixed& fixed2);
    Fixed&  operator!=(const Fixed& fixed1, const Fixed& fixed2);
    Fixed&  operator+(const Fixed& fixed1, const Fixed& fixed2);
    Fixed&  operator-(const Fixed& fixed1, const Fixed& fixed2);
    Fixed&  operator*(const Fixed& fixed1, const Fixed& fixed2);
    Fixed&  operator/(const Fixed& fixed1, const Fixed& fixed2);
    Fixed&  operator++();
    Fixed   operator++(int);
    Fixed&  operator--();
    Fixed   operator--(int);
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif