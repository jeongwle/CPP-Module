/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:12:17 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/16 17:55:09 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap default constructor called" << std::endl;
    this->_Name = "set name";
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
}

FragTrap::FragTrap(const std::string name){
    std::cout << "FragTrap parameter of constructor called" << std::endl;
    this->_Name = name;
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& copy){
    std::cout << "FragTrap copy constructor called" << std::endl;
    *(this) = copy;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap desstructor called" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap& trap){
    std::cout << "FragTrap assignation operator called" << std::endl;
    ClapTrap::operator=(trap);
    return *(this);
}

void    FragTrap::highFivesGuys(void){
    std::cout << this->_Name << " gave a positive high fives" << std::endl;
}