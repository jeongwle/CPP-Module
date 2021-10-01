/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 20:09:31 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/01 21:47:12 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern{
public :
    Intern();
    ~Intern();
    Intern(const Intern& copy);
    Intern& operator=(const Intern& intern);
    Form* newShrubbery(std::string target);
    Form* newRobotomy(std::string target);
    Form* newPresidential(std::string target);
    Form* makeForm(std::string formName, std::string target);
};


#endif