/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:56:32 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/18 16:45:39 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void){
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "pre-increment and post-increment" << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << "-------------------------------" << std::endl;

    std::cout << "just b" << std::endl;
    std::cout << b << std::endl;
    std::cout << "-------------------------------" << std::endl;

    Fixed  const c(5.05f);
    Fixed  const d(5.04f);
    Fixed  e(Fixed(5.025f) + Fixed(5.025f));

    // e = c + d;
    std::cout << "four arithmetic" << std::endl;
    std::cout << (Fixed(5.025f) / Fixed(2)) << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "-------------------------------" << std::endl;

    std::cout << "six comparison" << std::endl;
    std::cout << "c >= d : " << (c >= d) << std::endl;
    std::cout << "c > d : " << (c > d) << std::endl;
    std::cout << "c != d : " << (c != d) << std::endl;
    std::cout << "c < d : " << (c < d) << std::endl;
    std::cout << "c <= d : " << (c <= d) << std::endl;
    std::cout << "c == d : " << (c == d) << std::endl;
    std::cout << "-------------------------------" << std::endl;

    std::cout << "max and min" << std::endl;
    std::cout << "max value : " << Fixed::max(a, b) << std::endl;
    std::cout << "min value : " <<Fixed::min(a, b) << std::endl;
    std::cout << "-------------------------------" << std::endl;

    std::cout << "pre-decrement and post-decrement" << std::endl;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    std::cout << "-------------------------------" << std::endl;
    return (0);
}