/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:18:33 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/16 18:52:13 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("set name"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0){
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0){
    std::cout << "Parameter of constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
    std::cout << "Copy constructor called" << std::endl;
    *(this) = copy;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor called" << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& trap){
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->_Name = trap._Name;
    this->_HitPoints = trap._HitPoints;
    this->_EnergyPoints = trap._EnergyPoints;
    this->_AttackDamage = trap._AttackDamage;
    return *(this);
}

void    ClapTrap::attack(std::string const& target){
    std::cout << "ClapTrap <" << _Name << "> attacks" << " <" << target << ">, causing ";
    std::cout << "<" << _AttackDamage << "> points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (_HitPoints >= amount){
        _HitPoints -= amount;
    }
    else{
        _HitPoints = 0;
    }
    std::cout << "ClapTrap <" << _Name << "> takes <" << amount << "> points of damage! ";
    std::cout << "<" << _HitPoints << "> hit points left." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){
    _HitPoints += amount;
    std::cout << "ClapTrap <" << _Name << "> is repaired, <" << amount << "> points of recovery! ";
    std::cout << "<" << _HitPoints << "> hit points left." << std::endl;
}

std::string ClapTrap::getName() const{
    return this->_Name;
}

unsigned int    ClapTrap::getHitPoints() const{
    return this->_HitPoints;
}

unsigned int    ClapTrap::getEnergyPoints() const{
    return this->_EnergyPoints;
}

unsigned int    ClapTrap::getAttackDamage() const{
    return this->_AttackDamage;
}

void    ClapTrap::setAttackDamage(unsigned int amount){
    this->_AttackDamage = amount;
}
