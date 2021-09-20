/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:00:01 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/20 20:20:38 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal{
protected :
    std::string _Type;
public :
    Animal();
    virtual ~Animal();
    Animal(const Animal& copy);
    Animal& operator=(const Animal& animal);
    std::string getType() const;
    virtual void    makeSound() const;
};


#endif