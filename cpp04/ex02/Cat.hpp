/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:12:02 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/22 19:18:17 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
private :
    Brain *_Brain;
public :
    Cat();
    virtual ~Cat();
    Cat(const Cat& copy);
    Cat&    operator=(const Cat& cat);
    virtual void    makeSound() const;
    virtual std::string getIdea(int num) const;
    virtual void    setIdea(int num, std::string idea);
};

#endif