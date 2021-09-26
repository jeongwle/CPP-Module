/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:59:14 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/26 16:54:13 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
    return ;
}

Ice::~Ice(){
    return ;
}

Ice::Ice(const Ice& copy){
    this->_Type = copy._Type;
}

Ice::Ice(const std::string& type){
    this->_Type = type;
}

Ice&    Ice::operator=(const Ice& ice){
    if (ice._Type == "ice"){
        return *(this);
    }
    this->_Type = ice._Type;
    return *(this);
}

AMateria* Ice::clone(){
    AMateria *ice = new Ice();
    return ice;
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
