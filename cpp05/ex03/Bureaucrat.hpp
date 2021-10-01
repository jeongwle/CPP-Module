/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 21:22:47 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/30 21:51:52 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include <exception>
#include "Form.hpp"

class Form;
class Bureaucrat{
private :
    const std::string _Name;
    int _Grade;
    Bureaucrat();
public :
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& copy);
    Bureaucrat& operator=(const Bureaucrat& bureaucrat);
    std::string getName() const;
    int getGrade() const;
    void increment();
    void decrement();
    class GradeTooHighException : public std::exception{
    public :
        virtual const char* what() const throw(){
            return "Exception : Grade is too high.";
        }
    };
    class GradeTooLowException : public std::exception{
    public :
        virtual const char* what() const throw(){
            return "Exception : Grade is too low.";
        }
    };
    void signForm(Form& form) const;
    void executeForm(Form const& form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif