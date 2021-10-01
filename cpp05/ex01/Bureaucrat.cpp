/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 21:22:43 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/01 11:05:12 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _Name(name){
    if (grade < 1){
        throw GradeTooHighException();
    }
    else if (grade > 150){
        throw GradeTooLowException();
    }
    this->_Grade = grade;
}

Bureaucrat::~Bureaucrat(){
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _Name(copy._Name){
    this->_Grade = copy._Grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat){
    this->_Grade = bureaucrat._Grade;
    return *(this);
}

std::string Bureaucrat::getName() const{
    return this->_Name;
}

int Bureaucrat::getGrade() const{
    return this->_Grade;
}

void Bureaucrat::increment(){
    if (this->_Grade <= 1){
        throw GradeTooHighException();
    }
    this->_Grade--;
}

void Bureaucrat::decrement(){
    if (this->_Grade >= 150){
        throw GradeTooLowException();
    }
    this->_Grade++;
}

void Bureaucrat::signForm(Form& form) const{
    if (this->_Grade <= form.getSignGrade()){
        if (form.getSignOrNot()){
            std::cout << "<" << this->_Name << "> CANNOT sign <" << form.getName() << ">. <"  << form.getName() << "> is already signed." << std::endl;
        }
        else{
            std::cout << "<" << this->_Name << "> signs <" << form.getName() << ">." << std::endl;
            form.beSigned(*this);
        }
    }
    else{
        std::cout << "<" << this->_Name << "> CANNOT sign <" << form.getName() << ">." << std::endl;
        throw Form::GradeTooHighException();
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat){
    os << "My name is " << bureaucrat.getName() << ". And my bureaucrat grade is " << bureaucrat.getGrade() << "." << std::endl;
    return os;
}
