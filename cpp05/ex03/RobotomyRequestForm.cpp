/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:14:48 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/30 21:22:03 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest", 72, 45), _Target("empty"){
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequest", 72, 45), _Target(target){
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : Form(copy){
    this->_Target = copy.getTarget();
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& r){
    Form::operator=(r);
    this->_Target = r.getTarget();
    return *(this);
}

std::string RobotomyRequestForm::getTarget() const{
    return this->_Target;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const{
    (void)executor;
    srand(time(NULL));
    int randtemp = rand() % 2;
    if (randtemp){
        std::cout << "'Wiiing chicken!' 'Wiiing chicken!', <" << this->_Target << "> has been robotomized successfully 50% of the time." << std::endl;
        return ;
    }
    std::cout << "<" << this->_Target << "> fail to robotomize" << std::endl;
}
