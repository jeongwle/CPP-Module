/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:03:05 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/06 12:03:13 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    _name = "zom1";
}

Zombie::~Zombie(){
    std::cout << "<" << _name << ">" << " destructor ...ZzzznnniiiiiiiarB" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
}

void    Zombie::announce(){
    std::cout << "<" << _name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
