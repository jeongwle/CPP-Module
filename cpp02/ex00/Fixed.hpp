/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:11:22 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/06 14:22:49 by jeongwle         ###   ########.fr       */
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
    Fixed& operator=(const Fixed& fixed);
    int getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif