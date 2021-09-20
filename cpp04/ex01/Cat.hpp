/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:12:02 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/20 20:20:57 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal{
public :
    Cat();
    virtual ~Cat();
    Cat(const Cat& copy);
    Cat&    operator=(const Cat& cat);
    virtual void    makeSound() const;
};

#endif