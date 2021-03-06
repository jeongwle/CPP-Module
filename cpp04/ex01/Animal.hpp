/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:00:01 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/22 18:50:23 by jeongwle         ###   ########.fr       */
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
    virtual std::string getIdea(int num) const;
    virtual void    setIdea(int num, std::string idea);
};


#endif