/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Function.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:43:47 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/10 18:36:22 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Function.hpp"

Base * generate(void){
    srand(time(NULL));
    int randTemp = rand() % 3;
    switch (randTemp){
        case 0 :
            return new A();
        case 1 :
            return new B();
        case 2 :
            return new C();
    }
    return NULL;

}

void identify(Base* p){
    if (dynamic_cast<A *>(p)){
        std::cout << "I am A class." << std::endl;
    }
    else if (dynamic_cast<B *>(p)){
        std::cout << "I am B class." << std::endl;
    }
    else{
        std::cout << "I am C class." << std::endl;
    }
}

void identify(Base& p){
    try {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "I am A class." << std::endl;
    }
    catch (std::exception& e) {
        (void)e;
    }
    try {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "I am B class." << std::endl;
    }
    catch (std::exception& e) {
        (void)e;
    }
    try {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "I am C class." << std::endl;
    }
    catch (std::exception& e) {
        (void)e;
    }
}
