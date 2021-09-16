/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:12:57 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/16 19:15:49 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iomanip>

int main(void){
    std::cout << "-------------------- constructor ------------------" << std::endl;
    DiamondTrap Dia1("jeongwle");
    DiamondTrap Dia2("juyang");
    DiamondTrap Dia3(Dia2);
    std::cout << "---------------------------------------------------" << std::endl << std::endl; 
    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << std::setw(20) << "name" << "|";
    std::cout << std::setw(10) << "HP" << "|";
    std::cout << std::setw(10) << "EP" << "|";
    std::cout << std::setw(10) << "damage" << "|" << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << std::setw(20) << Dia1.ClapTrap::getName() << "|";
    std::cout << std::setw(10) << Dia1.getHitPoints() << "|";
    std::cout << std::setw(10) << Dia1.getEnergyPoints() << "|";
    std::cout << std::setw(10) << Dia1.getAttackDamage() << "|" << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << std::setw(20) << Dia2.ClapTrap::getName() << "|";
    std::cout << std::setw(10) << Dia2.getHitPoints() << "|";
    std::cout << std::setw(10) << Dia2.getEnergyPoints() << "|";
    std::cout << std::setw(10) << Dia2.getAttackDamage() << "|" << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << std::setw(20) << Dia3.ClapTrap::getName() << "|";
    std::cout << std::setw(10) << Dia3.getHitPoints() << "|";
    std::cout << std::setw(10) << Dia3.getEnergyPoints() << "|";
    std::cout << std::setw(10) << Dia3.getAttackDamage() << "|" << std::endl;
    std::cout << "------------------------------------------------------------------" << std::endl << std::endl;

    std::cout << "------------------------------whoAmI------------------------------" << std::endl;
    Dia1.whoAmI();
    Dia2.whoAmI();
    Dia3.whoAmI();
    std::cout << "------------------------------------------------------------------" << std::endl << std::endl;
    Dia2.attack(Dia1.getName());
    Dia1.takeDamage(Dia2.getAttackDamage());
    Dia1.attack(Dia2.getName());
    Dia2.takeDamage(Dia1.getAttackDamage());
    Dia2.beRepaired(30);
    Dia1.beRepaired(30);
    Dia1.highFivesGuys();
    Dia2.highFivesGuys();
    Dia1.guardGate();
    Dia2.guardGate();
    std::cout << "--------------------- destructor ------------------" << std::endl;
    return (0);
}
