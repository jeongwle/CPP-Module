/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:43:50 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/20 20:21:16 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal{
public :
    Dog();
    virtual ~Dog();
    Dog(const Dog& copy);
    Dog&    operator=(const Dog& dog);
    virtual void    makeSound() const;
};

#endif
