/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:45:45 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/01 11:11:28 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 145, 137), _Target("empty"){
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreation", 145, 137), _Target(target){
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : Form(copy){
    this->_Target = copy.getTarget();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& s){
    Form::operator=(s);
    this->_Target = s.getTarget();
    return *(this);
}

std::string ShrubberyCreationForm::getTarget() const{
    return this->_Target;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
    (void)executor;
    std::ofstream fout(this->_Target + "_shrubbery");
    fout << "          +          " << std::endl;
    fout << "         /*\\         " << std::endl;
    fout << "        /___\\        " << std::endl;
    fout << "         /*\\         " << std::endl;
    fout << "        /***\\        " << std::endl;
    fout << "       /*****\\       " << std::endl;
    fout << "      /_______\\      " << std::endl;
    fout << "        /***\\        " << std::endl;
    fout << "       /ASCII\\       " << std::endl;
    fout << "      /*******\\      " << std::endl;
    fout << "     /_________\\     " << std::endl;
    fout << "         |*|         " << std::endl;
    fout << "         |_|         " << std::endl;
    fout.close();
}
