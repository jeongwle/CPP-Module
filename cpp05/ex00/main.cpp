/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 21:22:52 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/02 17:33:38 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void){
    std::cout << "-------Wrong object construct-------" << std::endl;
    try {
        std::cout << "----------- Too Low Case -----------" << std::endl;
        Bureaucrat  b("noname", 200);
        std::cout << "------------------------------------" << std::endl;
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
        std::cout << "------------------------------------" << std::endl << std::endl;
    }
    try {
        std::cout << "----------- Too High Case ----------" << std::endl;
        Bureaucrat  b1("noname", 0);
        std::cout << "------------------------------------" << std::endl;
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
        std::cout << "------------------------------------" << std::endl << std::endl;
    }
    std::cout << "------------------------------------" << std::endl << std::endl;
    std::cout << std::endl << std::endl << std::endl;

    std::cout << "-------- Increment Exception --------" << std::endl;
    Bureaucrat b2("jeongwle", 2);
    try {
        std::cout << b2;
        b2.increment();
        std::cout << b2;
        b2.increment();
        std::cout << b2;
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
        std::cout << b2;
        std::cout << "------------------------------------" << std::endl << std::endl;
    }
    std::cout << "-------- Decrement Exception --------" << std::endl;
    Bureaucrat b3("juyang", 149);
    try {
        std::cout << b3;
        b3.decrement();
        std::cout << b3;
        b3.decrement();
        std::cout << b3;
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
        std::cout << b3;
        std::cout << "------------------------------------" << std::endl << std::endl;
    }
    return (0);
}