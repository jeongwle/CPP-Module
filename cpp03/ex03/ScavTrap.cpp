/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:12:40 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/16 18:24:25 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->_Name = "set name";
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(const std::string name){
    std::cout << "ScavTrap parameter of constructor called" << std::endl;
    this->_Name = name;
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy){
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *(this) = copy;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& trap){
    std::cout << "ScavTrap assignation operator called" << std::endl;
    ClapTrap::operator=(trap);
    return *(this);
}

void    ScavTrap::attack(std::string const& target){
    std::cout << "ScavTrap <" << this->_Name << "> attacks" << " <" << target << ">, causing ";
    std::cout << "<" << this->_AttackDamage << "> points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << this->_Name << " has enterred in Gate keeper mode." << std::endl;
}
