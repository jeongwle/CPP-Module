/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:20:26 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/30 21:22:43 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidnetialPardon", 25, 5), _Target("empty"){
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidnetialPardon", 25, 5), _Target(target){
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : Form(copy){
    this->_Target = copy.getTarget();
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& p){
    Form::operator=(p);
    this->_Target = p.getTarget();
    return *(this);
}

std::string PresidentialPardonForm::getTarget() const{
    return this->_Target;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const{
    (void)executor;
    std::cout << "<" << this->_Target << "> has been pardoned by Zafod Beeblebrox." << std::endl;
}
