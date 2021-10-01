/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 12:15:35 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/30 21:41:11 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){
    std::cout << "-------Wrong object construct-------" << std::endl;
    try {
        std::cout << "----------- Too Low Case -----------" << std::endl;
        Form  f("noname", 200, 200);
        std::cout << "------------------------------------" << std::endl;
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
        std::cout << "------------------------------------" << std::endl << std::endl;
    }
    try {
        std::cout << "----------- Too High Case ----------" << std::endl;
        Form  f1("noname", 0, 0);
        std::cout << "------------------------------------" << std::endl;
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
        std::cout << "------------------------------------" << std::endl << std::endl;
    }

    std::cout << "------- Two Bureaucrat born -------" << std::endl;
    Bureaucrat jeongwle("jeongwle", 1);
    Bureaucrat juyang("juyang", 100);
    std::cout << jeongwle;
    std::cout << juyang;
    std::cout << "-----------------------------------" << std::endl << std::endl;

    std::cout << "---------- One Form born ----------" << std::endl;
    Form form("form", 50, 50);
    std::cout << form;
    std::cout << "-----------------------------------" << std::endl << std::endl;

    std::cout << "------- juyang cannot sign --------" << std::endl;
    try {
        juyang.signForm(form);
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << form;
    std::cout << juyang;
    std::cout << "-----------------------------------" << std::endl << std::endl;

    std::cout << "-------- jeongwle can sign --------" << std::endl;
    try {
        jeongwle.signForm(form);
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << form;
    std::cout << jeongwle;
    std::cout << "-----------------------------------" << std::endl << std::endl;

    std::cout << "---------- already signed ---------" << std::endl;
    try {
        jeongwle.signForm(form);
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << form;
    std::cout << jeongwle;
    std::cout << "-----------------------------------" << std::endl << std::endl;
    return (0);
}
