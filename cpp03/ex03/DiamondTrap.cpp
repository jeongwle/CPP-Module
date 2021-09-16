/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:12:03 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/16 18:44:55 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->_Name = "set name";
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 30;
    // std::cout << &(ClapTrap::_HitPoints) << std::endl;
    // std::cout << &(ScavTrap::_HitPoints) << std::endl;
    // std::cout << &(FragTrap::_HitPoints) << std::endl;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name){
    std::cout << "DiamondTrap parameter of constructor called" << std::endl;
    this->_Name = name;
    ClapTrap::_Name = name + "_clap_name";
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy){
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *(this) = copy;
}

DiamondTrap&    DiamondTrap::operator=(const DiamondTrap& trap){
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    // ClapTrap::_Name = trap._Name + "_clap_name";
    ClapTrap::operator=(trap);
    this->_Name = trap._Name;
    return *(this);
}

void    DiamondTrap::attack(std::string const& target){
    ScavTrap::attack(target);
}

std::string DiamondTrap::getName() const{
    return this->_Name;
}

void    DiamondTrap::whoAmI(void){
    std::cout << "My name is <" << this->getName() << ">. My ClapTrap Name is <" << ClapTrap::getName() << ">." << std::endl;  
}
