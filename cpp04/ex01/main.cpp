/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:16:58 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/20 20:58:46 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main(void){
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "Animal and Cat and Dog" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "Animal get type method" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "j new Dog : " << j->getType() << " is my type." << std::endl;
    std::cout << "i new Cat : " <<  i->getType() << " is my type." << std::endl << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "make sound" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "now WrongAnimal and WrongCat" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;

    const WrongAnimal *wrongmeta = new WrongAnimal();
    const WrongAnimal *wrongj = new WrongDog();
    const WrongAnimal *wrongi = new WrongCat();
    std::cout << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "WrongAnimal gettype method" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "wrongi new WrongDog : " << wrongj->getType() << " is my type." << std::endl;
    std::cout << "wrongi new WrongCat : " << wrongi->getType() << " is my type." << std::endl << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "WrongAnimal make sound" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    wrongi->makeSound();
    wrongj->makeSound();
    wrongmeta->makeSound();
    std::cout << std::endl;
    delete wrongi;
    delete wrongj;
    delete wrongmeta;
    delete i;
    delete j;
    delete meta;
    return (0);
}