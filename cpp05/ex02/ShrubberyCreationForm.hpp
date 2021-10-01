/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:45:39 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/30 21:07:29 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form{
private :
    std::string _Target;
    ShrubberyCreationForm();
public :
    ShrubberyCreationForm(const std::string target);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm& copy);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& s);
    std::string getTarget() const;
    virtual void execute(const Bureaucrat& executor) const;
};

#endif