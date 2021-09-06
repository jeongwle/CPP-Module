/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:43:22 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/06 16:11:40 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

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
    Fixed& operator=(const Fixed& fixed);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;
};

#endif