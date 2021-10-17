/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:03:06 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/17 13:45:39 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void){
    int a = 2;
    int b = 3;
    std::string c = "chaine1";
    std::string d = "chaine2";
    float e = 2.3f;
    float f = 4.2f;
    double g = 5.55;
    double h = 7.77;
    char i = 'A';
    char j = 'D';

    ::swap(a, b);
    ::swap(c, d);
    ::swap(e, f);
    ::swap(g, h);
    ::swap(i, j);

    std::cout << "---------- swap ----------" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "i = " << i << ", j = " << j << std::endl;
    std::cout << "--------------------------" << std::endl << std::endl;

    std::cout << "---------- min -----------" << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
    std::cout << "min(g, h) = " << ::min(g, h) << std::endl;
    std::cout << "min(i, j) = " << ::min(i, j) << std::endl;
    std::cout << "--------------------------" << std::endl << std::endl;

    std::cout << "---------- max -----------" << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
    std::cout << "max(e, f) = " << ::max(e, f) << std::endl;
    std::cout << "max(g, h) = " << ::max(g, h) << std::endl;
    std::cout << "max(i, j) = " << ::max(i, j) << std::endl;
    std::cout << "--------------------------" << std::endl;
    
    return 0;
}