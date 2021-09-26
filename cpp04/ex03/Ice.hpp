/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:59:09 by jeongwle          #+#    #+#             */
/*   Updated: 2021/09/26 16:52:10 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria{
public :
    Ice();
    virtual ~Ice();
    Ice(const Ice& copy);
    Ice(const std::string& type);
    Ice&    operator=(const Ice& ice);
    virtual AMateria* clone();
    virtual void use(ICharacter& target);
};

#endif