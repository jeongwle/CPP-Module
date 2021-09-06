/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:17:47 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/19 12:17:48 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon& club) : _club(club){}

HumanA::HumanA(const std::string name, Weapon& club):_club(club){
    _name = name;
}

HumanA::~HumanA(){
    return ;
}
void    HumanA::attack(){
    std::cout << _name << " attacks with his " << _club.getType() << std::endl;
}
