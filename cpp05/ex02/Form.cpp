/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:45:49 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/30 21:45:34 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _Name("noname"), _SignGrade(50), _ExecuteGrade(10), _SignOrNot(false) {
    return ;
}

Form::~Form(){
    return ;
}

Form::Form(const std::string name, const int signgrade, const int executegrade) : _Name(name), _SignGrade(signgrade), _ExecuteGrade(executegrade){
    if (this->_SignGrade < 1){
        throw GradeTooHighException();
    }
    else if (this->_SignGrade > 150){
        throw GradeTooLowException();
    }
    if (this ->_ExecuteGrade < 1){
        throw GradeTooHighException();
    }
    else if (this->_ExecuteGrade > 150){
        throw GradeTooLowException();
    }
    this->_SignOrNot = false;
}

Form::Form(const Form& copy) : _Name(copy._Name), _SignGrade(copy._SignGrade), _ExecuteGrade(copy._ExecuteGrade){
    this->_SignOrNot = copy.getSignOrNot();
}

Form& Form::operator=(const Form& form){
    this->_SignOrNot = form.getSignOrNot();
    return *(this);
}

std::string Form::getName() const{
    return this->_Name;
}

int Form::getSignGrade() const{
    return this->_SignGrade;
}

int Form::getExecuteGrade() const{
    return this->_ExecuteGrade;
}

bool Form::getSignOrNot() const{
    return this->_SignOrNot;
}

void Form::beSigned(const Bureaucrat& bureaucrat){
    (void)bureaucrat;
    this->_SignOrNot = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form){
    os << "------------ Form state ------------" << std::endl;
    os << "Form name : " << form.getName() << std::endl;
    os << "Form grade required to sign : " << form.getSignGrade() << std::endl;
    os << "Form grade required to execute : " << form.getExecuteGrade() << std::endl;
    os << "Form state where it is signed : " << form.getSignOrNot() << std::endl;
    os << "------------------------------------" << std::endl;
    return os;
}