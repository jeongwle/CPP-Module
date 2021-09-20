/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:55:52 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/20 20:21:31 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public :
    WrongCat();
    virtual ~WrongCat();
    WrongCat(const WrongCat& copy);
    WrongCat&    operator=(const WrongCat& wrongcat);
    void    makeSound() const;
};

#endif