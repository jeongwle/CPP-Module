/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:20:30 by jeongwle          #+#    #+#             */
/*   Updated: 2021/10/02 00:24:09 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form{
private :
    std::string _Target;
    PresidentialPardonForm();
public :
    PresidentialPardonForm(const std::string target);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm& copy);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& p);
    std::string getTarget() const;
    virtual void execute(const Bureaucrat& executor) const;
};

#endif