/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:18:11 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/19 12:18:12 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
    _type = "";
}

Weapon::Weapon(const std::string str){
    _type = str;
}

Weapon::~Weapon(){
    return ;
}

const std::string& Weapon::getType(){
    return _type;
}

void    Weapon::setType(const std::string str){
    _type = str;
}
