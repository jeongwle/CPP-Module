/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:51:02 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/16 19:11:08 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iomanip>

int main(void){
    std::cout << "-------------------- constructor ------------------" << std::endl;
    ScavTrap    Scav;
    ScavTrap    Scav1("juyang");
    ScavTrap    Scav2("jeongwle");
    ScavTrap    Scav3(Scav1);
    std::cout << "---------------------------------------------------" << std::endl << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << std::setw(10) << "name" << "|";
    std::cout << std::setw(10) << "HP" << "|";
    std::cout << std::setw(10) << "EP" << "|";
    std::cout << std::setw(10) << "damage" << "|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << std::setw(10) << Scav1.getName() << "|";
    std::cout << std::setw(10) << Scav1.getHitPoints() << "|";
    std::cout << std::setw(10) << Scav1.getEnergyPoints() << "|";
    std::cout << std::setw(10) << Scav1.getAttackDamage() << "|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << std::setw(10) << Scav2.getName() << "|";
    std::cout << std::setw(10) << Scav2.getHitPoints() << "|";
    std::cout << std::setw(10) << Scav2.getEnergyPoints() << "|";
    std::cout << std::setw(10) << Scav2.getAttackDamage() << "|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << std::setw(10) << Scav3.getName() << "|";
    std::cout << std::setw(10) << Scav3.getHitPoints() << "|";
    std::cout << std::setw(10) << Scav3.getEnergyPoints() << "|";
    std::cout << std::setw(10) << Scav3.getAttackDamage() << "|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl << std::endl;
    Scav2.attack(Scav3.getName());
    Scav3.takeDamage(Scav2.getAttackDamage());
    Scav3.attack(Scav2.getName());
    Scav2.takeDamage(Scav3.getAttackDamage());
    Scav2.beRepaired(20);
    Scav3.beRepaired(20);
    Scav3.guardGate();
    Scav2.guardGate();
    std::cout << "--------------------- destructor ------------------" << std::endl;
    return (0);
}