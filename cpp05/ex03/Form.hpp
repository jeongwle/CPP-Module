/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:45:44 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/30 21:07:21 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
# include <exception>

class Bureaucrat;
class Form{
private :
    const std::string _Name;
    const int _SignGrade;
    const int _ExecuteGrade;
    bool _SignOrNot;
    Form();
public :
    virtual ~Form();
    Form(const std::string name, const int signgrade, const int executegrade);
    Form(const Form& copy);
    Form& operator=(const Form& form);
    class GradeTooHighException : public std::exception{
    public :
        virtual const char* what() const throw(){
            return "Exception : Form grade is too high.";
        }
    };
    class GradeTooLowException : public std::exception{
    public :
        virtual const char* what() const throw(){
            return "Exception : Form grade is too low.";
        }
    };
    std::string getName() const;
    int getSignGrade() const;
    int getExecuteGrade() const;
    bool getSignOrNot() const;
    void beSigned(const Bureaucrat& bureaucrat);
    virtual void execute(const Bureaucrat& executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif