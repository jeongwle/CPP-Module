/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:16:13 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/19 12:16:16 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
    Zombie  z1;
    Zombie  *z2 = NULL;
    Zombie  z3;

    std::cout << "-----------------------------" << std::endl;
    z1.announce();
    std::cout << "-----------------------------" << std::endl;
    z2 = z2->newZombie("new");
    std::cout << "-----------------------------" << std::endl;
    z2->announce();
    std::cout << "-----------------------------" << std::endl;
    z3.randomChump("random chump");
    std::cout << "-----------------------------" << std::endl;
    delete z2;
    return (0);
}
