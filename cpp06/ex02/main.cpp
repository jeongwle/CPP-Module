/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:31:31 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/10 18:41:39 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Function.hpp"

int main(void){
    Base *ptr;

    std::cout << std::endl;
    std::cout << "-------------- Result --------------" << std::endl;
    ptr = generate();
    std::cout << "Pointer identify : ";
    identify(ptr);
    std::cout << "Reference identify : ";
    identify(*ptr);
    std::cout << "------------------------------------" << std::endl << std::endl;
    std::cout << "-------------Destructor ------------" << std::endl;
    delete ptr;
    std::cout << "------------------------------------" << std::endl;
    return 0;
}