/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:22:19 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/26 21:31:36 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++){
        this->_Materia[i] = NULL;
    }
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++){
        if (this->_Materia[i] != NULL){
            delete this->_Materia[i];
        }
    }
}

MateriaSource::MateriaSource(const MateriaSource& copy){
    for (int i = 0; i < 4; i++){
        if (copy._Materia[i] != NULL){
            this->_Materia[i] = copy._Materia[i]->clone();
        }
        else{
            this->_Materia[i] = NULL;
        }
    }
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& materiasource){
    for (int i = 0; i < 4; i++){
        if (this->_Materia[i] != NULL){
            delete this->_Materia[i];
            this->_Materia[i] = NULL;
        }
    }
    for (int i = 0; i < 4; i++){
        if (materiasource._Materia[i] != NULL){
            this->_Materia[i] = materiasource._Materia[i]->clone();
        }
    }
    return *(this);
}

void MateriaSource::learnMateria(AMateria* m){
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
        default :
            delete m;
            break;
    }
}

AMateria* MateriaSource::createMateria(std::string const& type){
    for (int i = 0; i < 4; i++){
        if (this->_Materia[i] != NULL && this->_Materia[i]->getType() == type){
            return this->_Materia[i]->clone();
        }
    }
    return (0);
}

AMateria* MateriaSource::getMateria(int idx){
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