/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:18:03 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/19 12:18:05 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){
    _name = "";
    _club = NULL;
}

HumanB::HumanB(const std::string name){
    _name = name;
}

HumanB::~HumanB(){
    return ;
}

void    HumanB::attack(){
    std::cout << _name << " attacks with his " << _club->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& club){
    _club = &club;
}
