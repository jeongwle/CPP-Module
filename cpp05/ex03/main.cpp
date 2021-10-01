/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 20:58:38 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/02 00:17:42 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void test(Bureaucrat& b, Form* f){
    std::cout << "------------test case --------------" << std::endl;
    try {
        b.executeForm(*f);
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    try {
        b.signForm(*f);
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << *f;
    try {
        b.executeForm(*f);
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    try {
        b.signForm(*f);
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;
}

int main(void){
    Intern someRandomIntern;
    Form* s;
    Form* r;
    Form* p;
    Form* nothing;
    Bureaucrat jeongwle("jeongwle", 1);
    Bureaucrat junghwki("junghwki", 25);
    Bureaucrat mki("mki", 72);
    Bureaucrat ukwon("ukwon", 145);

    s = someRandomIntern.makeForm("ShrubberyCreation", "juyang");
    r = someRandomIntern.makeForm("RobotomyRequest", "juyang1");
    p = someRandomIntern.makeForm("PresidentialPardon", "juyang2");
    nothing = someRandomIntern.makeForm("nothing", "sehan");
    std::cout << std::endl << std::endl;
    std::cout << *s;
    std::cout << *r;
    std::cout << *p;
    test(ukwon, s);
    test(ukwon, r);
    test(ukwon, p);
    mki.executeForm(*s);
    std::cout << std::endl;
    test(junghwki, r);
    test(jeongwle, p);
    delete p;
    delete r;
    delete s;
    return (0);
}
