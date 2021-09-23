/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:50:48 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/23 20:05:58 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
    this->_Type = "Nothing";
}

AMateria::~AMateria(){
    return ;
}

AMateria::AMateria(const AMateria& copy){
    this->_Type = copy._Type;
}

AMateria::AMateria(std::string const& type){
    this->_Type = type;
}

AMateria&   AMateria::operator=(const AMateria& amateria){
    this->_Type = amateria._Type;
    return *(this);
}

std::string const& AMateria::getType() const{
    return this->_Type;
}

void AMateria::use(ICharacter& target){
    std::cout << "* shoots a materia at" << target.getName() << " *" << std::endl;
}
