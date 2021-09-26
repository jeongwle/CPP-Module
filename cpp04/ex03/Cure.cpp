/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:15:18 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/26 16:53:50 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
    return ;
}

Cure::~Cure(){
    return ;
}

Cure::Cure(const Cure& copy){
    this->_Type = copy._Type;
}

Cure::Cure(const std::string& type){
    this->_Type = type;
}

Cure&    Cure::operator=(const Cure& cure){
    if (cure._Type == "cure"){
        return *(this);
    }
    this->_Type = cure._Type;
    return *(this);
}

Cure::AMateria* Cure::clone(){
    AMateria *cure = new Cure();
    return cure;
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
