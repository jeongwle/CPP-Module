/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:15:53 by jeongwle          #+#    #+#             */
/*   Updated: 2021/08/19 12:15:57 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    _name = "zom1";
}

Zombie::~Zombie(){
    std::cout << "<" << _name << ">" << " destructor ...ZzzznnniiiiiiiarB" << std::endl;
}

void    Zombie::announce(){
    std::cout << "<" << _name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
