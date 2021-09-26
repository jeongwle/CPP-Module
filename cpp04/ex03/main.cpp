/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:37:09 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/26 21:42:05 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iomanip>

void showMateriaSource(IMateriaSource* src){
    std::cout << "----------------------" << std::endl;
    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "Materia" << "|" << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << std::setw(10) << "1" << "|";
    std::cout << std::setw(10);
    if (src->getMateria(0)){
        std::cout << src->getMateria(0)->getType() << "|" << std::endl;
    }
    else {
        std::cout << "NULL" << "|" << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    std::cout << std::setw(10) << "2" << "|";
    std::cout << std::setw(10);
    if (src->getMateria(1)){
        std::cout << src->getMateria(1)->getType() << "|" << std::endl;
    }
    else {
        std::cout << "NULL" << "|" << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    std::cout << std::setw(10) << "3" << "|";
    std::cout << std::setw(10);
    if (src->getMateria(2)){
        std::cout << src->getMateria(2)->getType() << "|" << std::endl;
    }
    else {
        std::cout << "NULL" << "|" << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    std::cout << std::setw(10) << "4" << "|";
    std::cout << std::setw(10);
    if (src->getMateria(3)){
        std::cout << src->getMateria(3)->getType() << "|" << std::endl;
    }
    else {
        std::cout << "NULL" << "|" << std::endl;
    }
    std::cout << "----------------------" << std::endl << std::endl;
}

void showCharacterMateria(ICharacter* person){
    std::cout << "---------------------------------" << std::endl;
    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "name" << "|";
    std::cout << std::setw(10) << "Materia" << "|" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << std::setw(10) << "1" << "|";
    std::cout << std::setw(10) << person->getName() << "|";
    std::cout << std::setw(10);
    if (person->getMateria(0)){
        std::cout << person->getMateria(0)->getType() << "|" << std::endl;
    }
    else{
        std::cout << "NULL" << "|" << std::endl;
    }
    std::cout << "---------------------------------" << std::endl;
    std::cout << std::setw(10) << "2" << "|";
    std::cout << std::setw(10) << person->getName() << "|";
    std::cout << std::setw(10);
    if (person->getMateria(1)){
        std::cout << person->getMateria(1)->getType() << "|" << std::endl;
    }
    else{
        std::cout << "NULL" << "|" << std::endl;
    }
    std::cout << "---------------------------------" << std::endl;
    std::cout << std::setw(10) << "3" << "|";
    std::cout << std::setw(10) << person->getName() << "|";
    std::cout << std::setw(10);
    if (person->getMateria(2)){
        std::cout << person->getMateria(2)->getType() << "|" << std::endl;
    }
    else{
        std::cout << "NULL" << "|" << std::endl;
    }
    std::cout << "---------------------------------" << std::endl;
    std::cout << std::setw(10) << "4" << "|";
    std::cout << std::setw(10) << person->getName() << "|";
    std::cout << std::setw(10);
    if (person->getMateria(3)){
        std::cout << person->getMateria(3)->getType() << "|" << std::endl;
    }
    else{
        std::cout << "NULL" << "|" << std::endl;
    }
    std::cout << "---------------------------------" << std::endl << std::endl;
}

int main(void){
    std::cout << "----------- MateriaSource inventory -----------" << std::endl;
    IMateriaSource *src = new MateriaSource();
    showMateriaSource(src);
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    showMateriaSource(src);
    std::cout << "-----------------------------------------------" << std::endl << std::endl;

    std::cout << "----------- Character inventory -----------" << std::endl;
    ICharacter *me = new Character("me");
    showCharacterMateria(me);
    AMateria *tmp1 = src->createMateria("ice");
    me->equip(tmp1);
    AMateria *tmp2 = src->createMateria("cure");
    me->equip(tmp2);
    std::cout << "----------- Wrong input -----------" << std::endl;
    AMateria *tmp3 = src->createMateria("jeongwle");
    showCharacterMateria(me);
    std::cout << "return value : " << tmp3 << std::endl;
    std::cout << "-----------------------------------" << std::endl << std::endl;
    AMateria *tmp4 = src->createMateria("ice");
    me->equip(tmp4);
    AMateria *tmp5 = src->createMateria("cure");
    me->equip(tmp5);
    AMateria *tmp6 = src->createMateria("ice");
    me->equip(tmp6);
    showCharacterMateria(me);
    std::cout << "--------------------------------------------" << std::endl << std::endl;

    std::cout << "----------- Character Deep Copy -----------" << std::endl;
    Character jeongwle("jeongwle");
    AMateria *tmp7 = src->createMateria("ice");
    jeongwle.equip(tmp7);
    Character juyang(jeongwle);
    AMateria *tmp8 = src->createMateria("cure");
    jeongwle.equip(tmp8);
    std::cout << "jeongwle" << std::endl;
    showCharacterMateria(&jeongwle);
    std::cout << "juyang" << std::endl;
    showCharacterMateria(&juyang);
    std::cout << "jeongwle Materia[0] addr : " << jeongwle.getMateria(0) << std::endl;
    std::cout << "juyang Materia[0] addr : " << juyang.getMateria(0) << std::endl;
    std::cout << "-------------------------------------------" << std::endl << std::endl;
    ICharacter *bob = new Character("bob");

    std::cout << "----------- Character use -----------" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);
    std::cout << "-------------------------------------" << std::endl << std::endl;

    std::cout << "----------- Character unequip -----------" << std::endl;
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);
    me->unequip(3);
    me->unequip(4);
    showCharacterMateria(me);
    std::cout << "-----------------------------------------" << std::endl << std::endl;
    delete tmp1;
    delete tmp2;
    delete tmp3;
    delete tmp4;
    delete tmp5;
    delete tmp6;
    delete bob;
    delete me;
    delete src;
    while (1)
        ;
    return (0);
}
