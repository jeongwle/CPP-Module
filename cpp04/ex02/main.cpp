/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:50:31 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/24 11:55:11 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void){
    // Animal a;
    const Animal *Animal[10];
    std::cout << "--------------constructor--------------" << std::endl;
    for (int i = 0; i < 5; i++){
        std::cout << i << std::endl;
        Animal[i] = new Cat();
    }
    for (int i = 5; i < 10; i++){
        std::cout << i << std::endl;
        Animal[i] = new Dog();
    }
    std::cout << "--------------------------------------" << std::endl << std::endl;

    std::cout << "--------------make sound--------------" << std::endl;
    for (int i = 0; i < 10; i++){
        Animal[i]->makeSound();
    }
    std::cout << "--------------------------------------" << std::endl << std::endl;

    std::cout << "--------------destructor--------------" << std::endl;
    for (int i = 0; i < 10; i++){
        std::cout << i << std::endl;
        delete Animal[i];
    }
    std::cout << "--------------------------------------" << std::endl << std::endl;

    std::cout << "--------------deep copy--------------" << std::endl;
    Cat cat1;
    cat1.setIdea(10, "jeongwle");
    Cat cat2(cat1);
    std::cout << "-------------- Cat deep --------------" << std::endl;
    std::cout << "cat1 idea = " << cat1.getIdea(10) << std::endl;
    std::cout << "cat2 idea = " << cat2.getIdea(10) << std::endl;
    cat1.setIdea(10, "juyang");
    std::cout << "cat1 idea = " << cat1.getIdea(10) << std::endl;
    std::cout << "cat2 idea = " << cat2.getIdea(10) << std::endl;
    std::cout << "--------------------------------------" << std::endl << std::endl;
    Dog dog1;
    dog1.setIdea(20, "jeongwle");
    Dog dog2;
    dog2 = dog1;
    std::cout << "-------------- Dog deep --------------" << std::endl;
    std::cout << "dog1 idea = " << dog1.getIdea(20) << std::endl;
    std::cout << "dog2 idea = " << dog2.getIdea(20) << std::endl;
    dog1.setIdea(20, "juyang");
    std::cout << "dog1 idea = " << dog1.getIdea(20) << std::endl;
    std::cout << "dog2 idea = " << dog2.getIdea(20) << std::endl;
    std::cout << "--------------------------------------" << std::endl << std::endl;
    std::cout << "--------------destructor--------------" << std::endl;
    return (0);
}
