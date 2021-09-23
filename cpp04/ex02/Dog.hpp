/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:43:50 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/22 18:48:43 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
private :
    Brain *_Brain;
public :
    Dog();
    virtual ~Dog();
    Dog(const Dog& copy);
    Dog&    operator=(const Dog& dog);
    virtual void    makeSound() const;
    virtual std::string getIdea(int num) const;
    virtual void    setIdea(int num, std::string idea);
};

#endif
