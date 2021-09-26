/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 20:41:45 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/26 20:50:33 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    this->_Name = "Empty";
    for (int i = 0; i < 4; i++){
        this->_Materia[i] = NULL;
    }
}

Character::~Character(){
    for (int i = 0; i < 4; i++){
        if (this->_Materia[i] != NULL){
            delete this->_Materia[i];
        }
    }
}

Character::Character(const std::string name){
    this->_Name = name;
    for (int i = 0; i < 4; i++){
        this->_Materia[i] = NULL;
    }
}

Character::Character(const Character& copy){
    this->_Name = copy._Name;
    for (int i = 0; i < 4; i++){
        if (copy._Materia[i] != NULL){
            this->_Materia[i] = copy._Materia[i]->clone();
        }
        else{
            this->_Materia[i] = NULL;
        }
    }
}

Character&  Character::operator=(const Character& character){
    this->_Name = character._Name;
    for (int i = 0; i < 4; i++){
        if (this->_Materia[i] != NULL){
            delete this->_Materia[i];
            this->_Materia[i] = NULL;
        }
    }
    for (int i = 0; i < 4; i++){
        if (character._Materia[i] != NULL){
            this->_Materia[i] = character._Materia[i]->clone();
        }
    }
    return *(this);
}

std::string const& Character::getName() const{
    return this->_Name;
}

void Character::equip(AMateria* m){
    int idx = 0;
    while (idx < 4 && this->_Materia[idx] != NULL){
        idx++;
    }
    switch (idx){
        case 0 :
            this->_Materia[0] = m;
            break;
        case 1 :
            this->_Materia[1] = m;
            break;
        case 2 :
            this->_Materia[2] = m;
            break;
        case 3 :
            this->_Materia[3] = m;
            break;
    }
}

void Character::unequip(int idx){
    switch (idx){
        case 0 :
            this->_Materia[0] = NULL;
            break;
        case 1 :
            this->_Materia[1] = NULL;
            break;
        case 2 :
            this->_Materia[2] = NULL;
            break;
        case 3 :
            this->_Materia[3] = NULL;
            break;
    }
}

void Character::use(int idx, ICharacter& target){
    switch (idx){
        case 0 :
            this->_Materia[0]->use(target);
            break;
        case 1 :
            this->_Materia[1]->use(target);
            break;
        case 2 :
            this->_Materia[2]->use(target);
            break;
        case 3 :
            this->_Materia[3]->use(target);
            break;
    }
}

AMateria* Character::getMateria(int idx){
    switch (idx){
        case 0 :
            return this->_Materia[0];
        case 1 :
            return this->_Materia[1];
        case 2 :
            return this->_Materia[2];
        case 3 :
            return this->_Materia[3];
    }
    return (0);
}
