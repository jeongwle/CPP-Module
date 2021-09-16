/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:20:48 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/16 19:12:01 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iomanip>

int main(void){
    std::cout << "-------------------- constructor ------------------" << std::endl;
    FragTrap    Frag1("juyang");
    FragTrap    Frag2("jeongwle");
    FragTrap    Frag3(Frag1);
    std::cout << "---------------------------------------------------" << std::endl << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << std::setw(10) << "name" << "|";
    std::cout << std::setw(10) << "HP" << "|";
    std::cout << std::setw(10) << "EP" << "|";
    std::cout << std::setw(10) << "damage" << "|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << std::setw(10) << Frag1.getName() << "|";
    std::cout << std::setw(10) << Frag1.getHitPoints() << "|";
    std::cout << std::setw(10) << Frag1.getEnergyPoints() << "|";
    std::cout << std::setw(10) << Frag1.getAttackDamage() << "|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << std::setw(10) << Frag2.getName() << "|";
    std::cout << std::setw(10) << Frag2.getHitPoints() << "|";
    std::cout << std::setw(10) << Frag2.getEnergyPoints() << "|";
    std::cout << std::setw(10) << Frag2.getAttackDamage() << "|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << std::setw(10) << Frag3.getName() << "|";
    std::cout << std::setw(10) << Frag3.getHitPoints() << "|";
    std::cout << std::setw(10) << Frag3.getEnergyPoints() << "|";
    std::cout << std::setw(10) << Frag3.getAttackDamage() << "|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl << std::endl;
    Frag2.attack(Frag3.getName());
    Frag3.takeDamage(Frag2.getAttackDamage());
    Frag3.attack(Frag2.getName());
    Frag2.takeDamage(Frag3.getAttackDamage());
    Frag2.beRepaired(30);
    Frag3.beRepaired(30);
    Frag3.highFivesGuys();
    Frag2.highFivesGuys();
    std::cout << "--------------------- destructor ------------------" << std::endl;
    return (0);
}
