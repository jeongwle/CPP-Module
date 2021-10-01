/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:14:53 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/30 21:14:57 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public Form{
private :
    std::string _Target;
    RobotomyRequestForm();
public :
    RobotomyRequestForm(const std::string target);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm& copy);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& r);
    std::string getTarget() const;
    virtual void execute(const Bureaucrat& executor) const;
};

#endif
