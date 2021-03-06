/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:18:35 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/16 19:06:31 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iomanip>

int main(void){
    std::cout << "-------------------- constructor ------------------" << std::endl;
    ClapTrap a("jeongwle");
    ClapTrap b("juyang");
    std::cout << "---------------------------------------------------" << std::endl << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << std::setw(10) << "name" << "|";
    std::cout << std::setw(10) << "HP" << "|";
    std::cout << std::setw(10) << "EP" << "|";
    std::cout << std::setw(10) << "damage" << "|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << std::setw(10) << a.getName() << "|";
    std::cout << std::setw(10) << a.getHitPoints() << "|";
    std::cout << std::setw(10) << a.getEnergyPoints() << "|";
    std::cout << std::setw(10) << a.getAttackDamage() << "|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << std::setw(10) << b.getName() << "|";
    std::cout << std::setw(10) << b.getHitPoints() << "|";
    std::cout << std::setw(10) << b.getEnergyPoints() << "|";
    std::cout << std::setw(10) << b.getAttackDamage() << "|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl << std::endl;
    a.setAttackDamage(5);
    b.setAttackDamage(3);
    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    b.attack(a.getName());
    a.takeDamage(b.getAttackDamage());
    a.beRepaired(3);
    b.beRepaired(5);
    std::cout << "--------------------- destructor ------------------" << std::endl;
    return (0);
}
