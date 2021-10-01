/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 20:09:27 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/02 00:03:24 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
    return ;
}

Intern::~Intern(){
    return ;
}

Intern::Intern(const Intern& copy){
    *(this) = copy;
}

Intern& Intern::operator=(const Intern& intern){
    (void)intern;
    return *(this);
}

Form* Intern::newShrubbery(std::string target){
    Form* res = new ShrubberyCreationForm(target);
    return res;    
}

Form* Intern::newRobotomy(std::string target){
    Form* res = new RobotomyRequestForm(target);
    return res;
}

Form* Intern::newPresidential(std::string target){
    Form* res = new PresidentialPardonForm(target);
    return res;
}

Form* Intern::makeForm(std::string formName, std::string target){
    std::string formList[3] = {
        "ShrubberyCreation",
        "RobotomyRequest",
        "PresidentialPardon"
    };
    Form* (Intern::*funcArr[3])(std::string) = {
        &Intern::newShrubbery,
        &Intern::newRobotomy,
        &Intern::newPresidential
    };
    int i = 0;
    while (i < 3){
        if (formList[i] == formName){
            std::cout << "Intern creates <" << formList[i] << "Form>." << std::endl;
            return (this->*funcArr[i])(target);
        }
        i++;
    }
    std::cout << "Error : Wrong formname" << std::endl;
    return NULL;
}

