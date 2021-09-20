/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:52:12 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/20 20:56:52 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP
# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal{
public :
    WrongDog();
    virtual ~WrongDog();
    WrongDog(const WrongDog& copy);
    WrongDog&    operator=(const WrongDog& wrongdog);
    void    makeSound() const;
};

#endif